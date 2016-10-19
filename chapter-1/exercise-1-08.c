#include <stdio.h>

main()
{
    int c, blank, tab, newline;

    blank = 0;
    tab = 0;
    newline = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++newline;
    }

    printf("Blanks:    %d\n", blank);
    printf("Tabs:      %d\n", tab);
    printf("New Lines: %d\n", newline);
}