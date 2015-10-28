#!/bin/bash

cat y6.txt | awk '{print $2}' | sort -u
echo "choose from here.."
read string 
echo "and numbers.."
read first last
rm $string-col_new_*
cat CMS_lowPtJets_Ybin6.dat | tail -12  > tmp
sed -i "s/\*//" tmp
sed -i '$ d' tmp

declare -a pm=("plus" "minus")
for j in "${pm[@]}";do
    if [ "$j" == "plus" ];then       
        HEADER=$(cat tmp | awk '{print $'$first'}' | head -1) 
        echo $HEADER > $string-col_new_$j
        cat y6.txt | grep $string | awk '{print $4*100}' >> $string-col_new_$j
    else
        HEADER=$(cat tmp | awk '{print $'$last'}' | head -1) 
        echo $HEADER > $string-col_new_$j
        cat y6.txt | grep $string | awk '{print $5*100*(-1)}' >> $string-col_new_$j
    fi

done
   

paste tmp $string-col_new_plus $string-col_new_minus | awk '{$'$first'=$(NF-1); $'$last'=$NF; $(NF-1)=""; $NF=""; print }' OFS="\t" > updated_y6
echo "BEFORE:"
cat tmp | awk '{print $'$first', $'$last'}'
echo "AFTER:"
cat y6.txt | grep $string | awk '{print ($4*100), ($5*100*(-1))}'


exit 0;
