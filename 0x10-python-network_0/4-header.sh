#!/bin/bash
# This script takes in a URL, sends a GET request, and displays the body of the response with a custom header
curl -sH "X-School-User-Id: 98" "$1"
