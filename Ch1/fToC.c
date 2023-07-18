/*
 * Title: Fahrenheit to Celsius Converter
 * Author: Frank E. Ciszek
 * Date: 7/17/2023
 * Purpose: Write a copy of the *F to *C
 * converter from the book C Programming
 * Language by Ritchie and Kernighan.
 * 
 * Domain Knowledge: Use the formula
 * *C = (5/9)(*F-32) 
 * 
 */

#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // Lower limit of temp table
    upper = 300; // upper limit of temp table
    step = 20; // step size

    fahr = lower;

    while (fahr <= upper) {
        // Conversion done this way because
        // of use of integer math.
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }

}

