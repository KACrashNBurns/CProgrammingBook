/*
 * Title: Fahrenheit to Celsius Converter
 *        Floating Point Version
 * Author: Frank E. Ciszek
 * Date: 7/17/2023
 * Purpose: Write a copy of the *F to *C
 * converter from the book C Programming
 * Language by Ritchie and Kernighan.  This
 * is the floating point version performed
 * for improved accuracy of the table.
 * 
 * Domain Knowledge: Use the formula
 * *C = (5/9)(*F-32) 
 * 
 * Exercise 1-3: Modify the program 
 * to print a heading above the 
 * 
 */

#include <stdio.h>

/* Print *F-*C table for
    fahr = 0, 20, ..., 300; floating
    point version */

main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    
    printf("*F to *C\n");   // Exercise 1-3
    printf("---------\n");  // Exercise 1-3

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }


}