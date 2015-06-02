#!/bin/bash

# $1 = sources
# $2 = errors
# $3 = xsections
# $4 = eta

IFS=$'\n'
set -f

touch tmp
for i in `seq 1 37`; do
	for s in $(cat $1); do
		num=$(cat $2 | grep $s | awk '{print $6}' | sed -n "$i p")
		echo -n $num " " >> tmp  	
	done
	echo >> tmp
done

#pr -mts bins tmp > final_y1.txt
pr -mts $3 tmp > final_$4.txt

rm tmp

exit 0;
