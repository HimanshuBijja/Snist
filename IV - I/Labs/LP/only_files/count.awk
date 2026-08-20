#!/usr/bin/awk -f
# count.awk
# Count characters, words, and lines in a file
{
    line_count++                 # Count each line
    word_count += NF             # NF = number of fields (words) in current line
    char_count += length($0)     # $0 = entire line, length($0) = characters in line
}
END {
    print "Number of lines     :", line_count
    print "Number of words     :", word_count
    print "Number of characters:", char_count
}
