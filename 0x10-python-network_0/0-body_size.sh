#!/bin/bash
# This script takes a URL as an argument, sends a request using curl,
# and displays the size of the response body in bytes.

# Sending a request to the specified URL and printing the size of the response body
curl -sI "$1" | grep -i Content-Length | awk '{print $2}'
