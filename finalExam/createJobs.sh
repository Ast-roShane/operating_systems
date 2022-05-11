#!/bin/bash

mkdir -p dir{9}
mkdir -p dir{90}
mkdir -p dir{900}
mkdir -p dir{9000}
mkdir -p dir{90000}

for f in *.c
do
  cp -v "$f" /csci320/finalExam/dir{9} "${f%.c}"
done

for f in *.c
do
  cp -v "$f" /csci320/finalExam/dir{90} "${f%.c}"
done

for f in *.c
do
  cp -v "$f" /csci320/finalExam/dir{900} "${f%.c}"
done

for f in *.c
do
  cp -v "$f" /csci320/finalExam/dir{9000} "${f%.c}"
done

for f in *.c
do
  cp -v "$f" /csci320/finalExam/dir{90000} "${f%.c}"
done
