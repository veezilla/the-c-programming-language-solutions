#include <stdio.h>

/**
 * Write a program to copy its input to its ouput, replacing each string of one
 * or more blanks by a single blank.
 */
 
main()
{
    int previous, current;

    previous = 1;

    while ((current = getchar()) != EOF) {
        if (previous == ' ' && current == ' ')
            ;
        else
            putchar(current);

        previous = current;
    }
}