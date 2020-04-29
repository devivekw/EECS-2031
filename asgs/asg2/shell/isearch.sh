#!/bin/sh
# EECS2031 - asg2_unix
# Filename: isearch
# Author: Chomu, Homu
# Email: chomuhomu@my.yorku.ca
# Login ID: chomuhomu

echo -n "Enter file name: "
read fname

if test ! -f $fname; then
    echo "File $fname does not exist"
    exit 1

elif test ! -r $fname; then
    echo "File $fname is not readable"

fi

echo -n "Enter word to search for : "
read word

echo -n "Case sensitive (y/n)? : "
read cyn

while test $cyn != Y && test $cyn != n && test $cyn != y && test $cyn != N; do
    echo "Invalid Option"
    echo -n "Case sensitive (y/n)? : "
    read cyn
done

if test $cyn = "y" || test $cyn = "Y"; then
    grep $word $fname

elif test $cyn = "N" || test $cyn = "n"; then
    grep -i $word $fname

fi

if test $? -ne 0; then
    echo "Word '$word' not found."

fi
