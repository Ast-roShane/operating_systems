#!/bin/bash
echo "enter a value:"

read COUNT

while  (($COUNT > 0 )) ;
        do
        echo $COUNT
        let COUNT=COUNT-1
 done
 echo GO!
