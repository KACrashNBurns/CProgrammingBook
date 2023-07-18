/*
 * Title: Fahrenheit to Celsius Converter
 *        For Loop Version.
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
 * Exercise 1-5: Modify the program to 
 * print the table in revrese. From
 * 300 degrees to 0.
 * 
 */

#include <stdio.h>

main()
{
    int fahr;

    // for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    //     printf("%3d%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    // }

    // Exercise 1-5:
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

}