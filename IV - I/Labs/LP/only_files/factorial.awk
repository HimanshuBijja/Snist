#!/usr/bin/awk -f
# factorial.awk

BEGIN {
    printf "Enter a number: "
    getline n < "-"
    fact = 1
    for (i = 1; i <= n; i++)
        fact = fact * i
    print "Factorial of", n, "is:", fact
}
