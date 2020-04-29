#!/bin/sh
# EECS2031 - asg2_unix
# Filename: icount
# Author: Chomu, Homu
# Email: chomuhomu@my.yorku.ca
# Login ID: chomuhomu

echo -n "Enter the file name: "
read fname

if test ! -f $fname; then
    echo "File '$fname' does not exist"
    exit 1

elif test ! -r $fname; then
    echo "File '$fname' is not readable."
    exit 1
fi

echo -n "Count lines, words, characters or all three (l, m, c, a)? "
read choice

while test $choice != l && test $choice != L && test $choice != m && test $choice != M && test $choice != c && test $choice != C && test $choice != a && test $choice != A; do
    echo "Invalid choice"
    echo -n "Count lines, words, characters or all three (l, m, c, a)? "
    read choice
done

if test $choice = l || test $choice = L; then
    l=$(wc -l <$fname)
    echo "File '$fname' contains $l lines."

elif test $choice = w || test $choice = W; then
    w=$(wc -w <$fname)
    echo "File '$fname' contains $w lines."

elif test $choice = c || test $choice = C; then
    c=$(wc -c <$fname)
    echo "File '$fname' contains $c characters."

elif test $choice = a || test $choice = A; then
    l=$(wc -l <$fname)
    w=$(wc -w <$fname)
    c=$(wc -c <$fname)
    echo "File '$fname' contains $l lines, $w words, $c characters."

else
    echo "Invalid!"

fi
