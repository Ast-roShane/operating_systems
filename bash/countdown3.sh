#!/bin/bash
COUNT=${1:-the default value}


while  (($COUNT > 0 )) ;
        do
        echo $COUNT
        let COUNT=COUNT-1
 done
 echo GO!
