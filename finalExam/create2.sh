#!/bin/bash

mkdir -p dir{9}

srcdir="~.//finalExam"
dstdir="~.//dir{9}"
d=$(date +%m%d%y)
srcfile="avg.c"


for srcfile in ${srcdir}/*
do
    dstfile=$(basename $srcfile)
    dstfile=${dstfile/\./${d}\.}
   cp $srcfile $dstdir/$dstfile
done
