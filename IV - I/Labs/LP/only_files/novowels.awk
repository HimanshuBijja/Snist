#!/usr/bin/awk -f
# novowels.awk

!/a|e|i|o|u|A|E|I|O|U/ {count++}
END { 
print "Number of lines without vowels =", count
}
