/*
 * Title: Celsius to Fahrenheit Converter
 *        Floating Point Version
 * Author: Frank E. Ciszek
 * Date: 7/17/2023
 * Purpose: Write a *C to *F 
 * converter for the book C Programming
 * Language by Ritchie and Kernighan.  This
 * is the floating point version performed
 * for improved accuracy of the table.
 * 
 * Domain Knowledge: Use the formula
 * *F = (9/5 * *C) + 32
 * 
 * Exercise 1-3: Modify the program 
 * to print a heading above the 
 * 
 */

#include <stdio.h>

/* Print *C-*F table for
    Celsius = 0, 20, ..., 300; floating
    point version */

main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    
    printf("*C to *F\n");   // Exercise 1-3
    printf("---------\n");  // Exercise 1-3

    while (celsius <= upper) {
        fahr = ((9.0 / 5.0) * celsius)
                 + 32.0;
        printf("%3.0f%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}