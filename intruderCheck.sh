#!/bin/bash

#set debug optiion
set -x

#print shell 
echo "$SHELL"

networksetup -listnetworkserviceorder

#check network connectivity
if ping -c 1 google.com; then
  echo "It appears you have a working internet connection"
fi