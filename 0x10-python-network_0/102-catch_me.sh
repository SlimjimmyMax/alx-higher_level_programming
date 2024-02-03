#!/bin/bash
# This script makes a request to a specific URL to trigger a response with a specific message
curl -sLX PUT "$1/catch_me" -d "user_id=98" -H "Origin: HolbertonSchool"
