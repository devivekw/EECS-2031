#!/bin/sh
# EECS2031 - asg2_unix
# Filename: fdisplay
# Author: Chomu, Homu
# Email: chomuhomu@my.yorku.ca
# Login ID: chomuhomu

echo -n "Enter the file name: "
read fname

if test ! -f $fname; then
    echo "File '$fname' does not exist."
    exit 1

elif test ! -r $fname; then
    echo "File '$fname' is not readable."
    exit 1
fi

echo -n "Enter choice (e, p, f, l): "
read choice

while test $choice != e && test $choice != E && test $choice != p && test $choice != P && test $choice != f && test $choice != F && test $choice != l && test $choice != L; do
    echo "Invalid choice"
    echo -n "Enter choice (e, p, f, l): "
    read choice
done

if test $choice = e || test $choice = E; then
    cat $fname

elif test $choice = p || test $choice = P; then
    cat $fname | more

elif test $choice = f || test $choice = F; then
    head -10 $fname

elif test $choice = l || test $choice = L; then
    tail -10 $fname

fi
