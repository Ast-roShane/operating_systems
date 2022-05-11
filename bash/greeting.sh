#!/bin/bash

# A simple script
#greeting assignment

varname=$(date +%k)

if [ varname <= 12 && varname > 6 ]; then
  echo "Good morning, $(whoami) "
  echo " the time is $(date) "

elif [ varname > 12 && varname <= 18 ]; then
  echo "Good Evening, $(whoami)"
  echo "the time is $(date)"

elif [ varname > 18 && varname <= 21 ]; then
    echo "Good Evening, $(whoami)"
    echo "the time is $(date)"

else #[ varname > 21 || varname <= 5 ]; then
    echo "YOU SHOULD BE SLEEPING, $(whoami)"
    echo " the time is $(date)"

  fi
