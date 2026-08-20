#!/bin/bash

# Check if directory name is supplied
if [ $# -eq 0 ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi

dir=$1

if [ -d "$dir" ]; then
    echo "Files in directory '$dir':"
    for file in "$dir"/*; do
        if [ -f "$file" ]; then
            echo "$(basename "$file")"
        fi
    done
else
    echo "'$dir' is not a valid directory."
fi
