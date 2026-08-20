#!/bin/bash
# 6th Program
if [ $# -eq 0 ]; then
    echo "Usage: $0 <file_or_directory> [more_files_or_directories...]"
    exit 1
fi

# Loop through all arguments
for item in "$@"; do
    if [ -f "$item" ]; then
        lines=$(wc -l < "$item")
        echo "'$item' is a file with $lines lines."
    elif [ -d "$item" ]; then
        echo "'$item' is a directory."
    else
        echo "'$item' is not a valid file or directory."
    fi
done
