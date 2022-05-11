#!/bin/bash

COUNT=10

while  (($COUNT > 0 )) ;
        do
        echo $COUNT
        let COUNT=COUNT-1
 done
 echo GO!
