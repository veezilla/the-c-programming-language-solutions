#include <stdio.h>

/**
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("%3s %6s\n", "Cel", "Fah");
    printf("==========\n");

    fahr = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}