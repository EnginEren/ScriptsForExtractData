#!/bin/bash

touch ratio.txt
for i in `seq 1 57`; do 
	touch tmp1 tmp2 
	echo $i
	cat $1 | awk '{print $'"$i"'}' > tmp1 
	cat $2 | awk '{print $'"$i"'}' > tmp2
	paste tmp1 tmp2 | awk '{print $1/$2}' >> ratio.txt 
	rm tmp1 tmp2	
done

exit 0; 
