#!/bin/bash
# This script takes a URL as an argument, sends a request using curl,
curl -sI "$1" | grep -i Content-Length | awk '{print $2}'
