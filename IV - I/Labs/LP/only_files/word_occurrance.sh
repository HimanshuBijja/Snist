#!/bin/bash

# Check if at least two arguments are given
if [ $# -lt 2 ]; then
    echo "Usage: $0 <reference_file> <file1> [file2 ...]"
    exit 1
fi

ref_file=$1
shift  # Remove the first argument from the list

if [ ! -f "$ref_file" ]; then
    echo "Error: '$ref_file' is not a valid file."
    exit 1
fi

# Extract unique words from the reference file
for word in $(tr -s '[:space:]' '\n' < "$ref_file" | sort -u); do
    echo "Word: '$word'"
    for file in "$@"; do
        if [ -f "$file" ]; then
            count=$(grep -wo "$word" "$file" | wc -l)
            echo "  In $file: $count times"
        else
            echo "  $file is not a valid file"
        fi
    done
done
