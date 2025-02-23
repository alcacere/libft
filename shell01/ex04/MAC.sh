#! /bin/bash

ip a | awk '/link\/ether/ {print $2}'

