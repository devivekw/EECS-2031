#!/bin/sh
# EECS2031 - asg2_unix
# Filename: doublesp
# Author: Chomu, Homu
# Email: chomuhomu@my.yorku.ca
# Login ID: chomuhomu
echo -n "Enter input file name: "
read ifname

if test ! -f $ifname; then
    echo "File $ifname does not exist."
    exit 1

elif test ! -r $ifname; then
    echo "File $ifname is not readable."
    exit 1

fi

echo -n "Enter output file name: "
read ofname

if test -f $ofname; then

    if test ! -w $ofname; then
        echo "File $ofname is not writeable."
        exit 1

    else
        echo "File $ofname exists."

    fi

else
    count=1
    cat $ifname | while read input; do
        if test $(expr $count % 2) -eq 0; then
            echo "$input \n"
            count=$(expr $count + 1)

        else
            echo "$input"
            count=$(expr $count + 1)

        fi
    done >$ofname

    exit 1

fi

echo -n "Append $ifname to $ofname ? (y/n) : "
read option

while test $option != y && test $option != Y && test $option != n && test $option != N; do
    echo "Invalid option"
    echo -n "Append $ifname to $ofname ? (y/n) : "
    read option
done

if test $option = y || test $option = Y; then
    count=1
    cat $ifname | while read input; do
        if test $(expr $count % 2) -eq 0; then
            echo "$input \n"
            count=$(expr $count + 1)

        else
            echo "$input"
            count=$(expr $count + 1)

        fi
    done >>$ofname
    exit 1

elif test $option = n || test $option = N; then
    exit 1

else
    echo "Invalid!"

fi
