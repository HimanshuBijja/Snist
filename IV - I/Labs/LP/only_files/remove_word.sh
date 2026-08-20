#!/bin/bash

# Check arguments
if [ $# -lt 2 ]; then
    echo "Usage: $0 <word> <file1> [file2 ...]"
    exit 1
fi

word=$1
shift   # shift arguments so that $@ now contains only filenames

for file in "$@"
do
    if [ ! -f "$file" ]; then
        echo "Error: '$file' is not a valid file!"
        continue
    fi

    # Create a temporary file without the matching lines
    tmpfile=$(mktemp)

    while IFS= read -r line
    do
        case "$line" in
            *"$word"*) ;;          # if line contains the word → skip
            *) echo "$line" >> "$tmpfile" ;;  # otherwise keep it
        esac
    done < "$file"

    # Replace original file with the filtered one
    mv "$tmpfile" "$file"
    echo "Updated: $file (deleted lines containing '$word')"
done