#!/bin/bash

echo "Files with read, write, and execute permissions for the user:"

for file in *  # loop through all entries in current directory
do
    if [ -f "$file" ] && [ -r "$file" ] && [ -w "$file" ] && [ -x "$file" ]; then
        echo "$file"
    fi
done