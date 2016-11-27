#include <stdio.h>

/**
 * Modify the temperature conversion program to print a heading above the
 *  table.
*/

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    printf("%3s %6s\n", "Fah", "Cel");
    printf("==========\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}