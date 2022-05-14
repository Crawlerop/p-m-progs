#!/bin/bash
openssl req -x509 -newkey rsa:4096 -keyout test_key.pem -out test_cert.pem -sha256 -days 365 -nodes