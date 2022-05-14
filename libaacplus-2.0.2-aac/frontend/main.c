#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "au_channel.h"
#include "aacplus.h"

FILE* AuChannelOpen (const char* filename, WavInfo* info);

int main(int argc, char *argv[])
{

  WavInfo inputInfo;
  FILE *inputFile = NULL;
  FILE *hADTSFile;

  int  error;
  int  bEncodeMono = 0;
  int frmCnt = 0;
  unsigned int aacLC = 0;

   /*
   * parse command line arguments
   */
  if (argc < 5) {
    fprintf(stderr, "\nUsage:   %s <wav_file> <bitstream_file> <bitrate> <(m)ono/(s)tereo> <lc>\n", argv[0]);
    fprintf(stderr, "\nExample: %s input.wav out.aac 24000 s\n", argv[0]);
    return 0;
  }

  if ( strcmp (argv[4],"m") == 0 ) {
    bEncodeMono = 1;
  }
  else {
    if ( strcmp (argv[4],"s") != 0 ) {
      fprintf(stderr, "\nWrong mode %s, use either (m)ono or (s)tereo\n", argv[4]);
      return 0;
    }
  }
   
  if (argc > 5) {    
    if ( strcmp (argv[5],"lc") != 0 ) {
      fprintf(stderr, "\nLow-Complexity mode\n");
      aacLC = 1;
    }
  }

  fflush(stdout);

  inputFile = AuChannelOpen (argv[1], &inputInfo);

  if(inputFile == NULL){
    fprintf(stderr,"could not open %s\n",argv[1]);
    exit(10);
  }

  if (inputInfo.nChannels==1 && !bEncodeMono) {
	  fprintf(stderr,"Need stereo input for stereo coding mode !\n");
	  exit(10);
  }

  if (strcmp(argv[2],"-")==0)
   hADTSFile=stdout;
  else
   hADTSFile = fopen(argv[2], "wb");

  if(!hADTSFile) {
   fprintf(stderr, "\nFailed to create ADTS file\n") ;
      exit(10);
    }

  /*
    Be verbose
   */
  unsigned long inputSamples=0;
  unsigned long maxOutputBytes=0;
  aacplusEncHandle hEncoder = aacplusEncOpenW(inputInfo.sampleRate,
		  	  inputInfo.nChannels,
		  	  &inputSamples,
		  	  &maxOutputBytes, !aacLC);

  //inputSamples /= 2;

  aacplusEncConfiguration *cfg = aacplusEncGetCurrentConfiguration(hEncoder);
  cfg->bitRate = atoi(argv[3]);
  cfg->bandWidth = 0;
  cfg->outputFormat = 1;
  cfg->nChannelsOut = bEncodeMono ? 1 : inputInfo.nChannels;
  if(inputInfo.aFmt == WAV_FORMAT_FLOAT){
    cfg->inputFormat = AACPLUS_INPUT_FLOAT;
  }
	
  fprintf(stdout,"input file %s: \nsr = %d, nc = %d fmt = %d\n\n",
          argv[1], inputInfo.sampleRate, inputInfo.nChannels, inputInfo.aFmt);
  fprintf(stdout,"output file %s: \nbr = %d inputSamples = %lu  maxOutputBytes = %lu nc = %d m = %d\n\n",
            argv[2], cfg->bitRate, inputSamples, maxOutputBytes, cfg->nChannelsOut, bEncodeMono);
  fflush(stdout);

  int ret = 0;
  if((ret = aacplusEncSetConfiguration(hEncoder, cfg)) == 0) {
      fprintf(stdout,"setting cfg failed\n", ret);
      return -1;
  }

  uint8_t *outputBuffer = malloc(maxOutputBytes);
  int32_t *TimeDataPcm;
  int32_t *blank_samples = calloc(inputSamples, sizeof(float));
  memset(blank_samples, 0, inputSamples);

  if(inputInfo.aFmt == WAV_FORMAT_FLOAT) {
    TimeDataPcm = calloc(inputSamples, sizeof(float));
  } else {
    TimeDataPcm = calloc(inputSamples, sizeof(short));
  }

  unsigned long extra_data;
  unsigned char *extra_data_bytes;
  if (aacplusEncGetDecoderSpecificInfo(hEncoder, &extra_data_bytes,
                                           &extra_data) == 1) {
      fprintf(stderr, "AAC Extra Data:\n");
      for (int ed = 0; ed<extra_data; ed++) {
        fprintf(stderr, "%02x ", extra_data_bytes[ed]);
      }
      fprintf(stderr, "\n\n");
  }

  int stopLoop = 0;
  int bytes = 0;
  do {
      int numSamplesRead = 0;
      if(inputInfo.aFmt == WAV_FORMAT_FLOAT) {
          if ( AuChannelReadFloat(inputFile, (float *) TimeDataPcm, inputSamples, &numSamplesRead) > 0) {
                  stopLoop = 1;
                  break;
          }
      } else {
          if ( AuChannelReadShort(inputFile, (short *) TimeDataPcm, inputSamples, &numSamplesRead) > 0) {
                  stopLoop = 1;
                  break;
          }
      }

      /*
      for (int i = 0; i<numSamplesRead; i++) {
        printf("%02x", TimeDataPcm[i]);
      }
      printf("\n\n");
      */

      bytes = aacplusEncEncode(hEncoder, (int32_t *) TimeDataPcm, numSamplesRead,
              outputBuffer,
              maxOutputBytes);
      
      if(bytes > 0) {
        //fprintf(stderr, "HAS DATA\n");
        fwrite(outputBuffer, bytes, 1, hADTSFile);
      }/* else {
        fprintf(stderr, "needed %d data - %d frames\n", aacplusEncGetRequiredFrames(hEncoder), aacplusEncGetRequiredFrames(hEncoder)/inputInfo.nChannels);
      }*/

      if(numSamplesRead < inputSamples) {
          stopLoop = 1;
          break;
      }

      frmCnt++;
      fprintf(stderr,"[%d]\r",frmCnt); fflush(stderr);
  } while (!stopLoop && bytes >= 0);

  do {
  bytes = aacplusEncEncode(hEncoder, NULL, 0,
          outputBuffer,
          maxOutputBytes);
  
  if (bytes > 0) {
    fprintf(stderr, "Flushing %d bytes..\n", bytes);
    fwrite(outputBuffer, bytes, 1, hADTSFile);
  }

  } while (bytes > 0);

  /*
  for (int loop = 0; loop < 1; loop++) {

    bytes = aacplusEncEncode(hEncoder, (int32_t *) blank_samples, inputSamples,
            outputBuffer,
            maxOutputBytes);
    
    if(bytes > 0) {
      //fprintf(stderr, "HAS DATA\n");
      fprintf(stderr, "Padding %d bytes..\n", bytes);
      fwrite(outputBuffer, bytes, 1, hADTSFile);
    }

  }
  */

  fprintf(stderr,"\n");
  fflush(stderr);

  printf("\nencoding finished\n");
  aacplusEncClose(hEncoder);
  fclose(hADTSFile);
  free(outputBuffer);
  free(TimeDataPcm);
  return 0;
}
