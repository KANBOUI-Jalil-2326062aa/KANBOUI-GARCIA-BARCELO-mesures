#!/bin/bash
res=0

IFS="
"

for f in `(find . ! -type d ! -path "./.git/*" ! -path "./count.sh" ! -path "./README.md")`; 
do
let " res += `wc -l $f | awk '{print $1}'`  "
done
echo $res
