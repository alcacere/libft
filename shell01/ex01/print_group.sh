#! /bin/bash

id -Gn | sed 's/ /,/g'
