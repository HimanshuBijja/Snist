#!/bin/bash

if [ $# -ne 3 ]; then
    echo "Usage: $0 <filename> <start_line> <end_line>"
    exit 1
fi

filename=$1
start=$2
end=$3

# Check file existence
if [ ! -f "$filename" ]; then
    echo "Error: File '$filename' not found!"
    exit 1
fi

lineno=0
while IFS= read -r line
do
    lineno=$((lineno + 1))
    if [ $lineno -ge $start ] && [ $lineno -le $end ]; then
        echo "$line"
    fi
done < "$filename"