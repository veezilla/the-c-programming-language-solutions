#include <stdio.h>

/**
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

main ()
{
    int c;

    c = getchar() != EOF;

    printf("c = getchar() != EOF is %d\n", c);
}