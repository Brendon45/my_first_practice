#include <stdio.h>   
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;       /* Declare integer variables */
    float x, y;     /* Declare float variables */
    int sum, difference; /* For the sum and difference of integers */
    float fsum, fdifference; /* For the sum and difference of floats */
    
    /* This is for the integers */
    scanf("%d %d", &a, &b); /* Read two integers */
    sum = a + b;   /* Calculate the sum */
    difference = a - b; /* Calculate the difference */
    printf("%d %d", sum, difference); /* Print the sum and difference */
    
    printf("\n"); /* Print a newline for formatting */
    
    /* This is for the float */
    scanf("%f %f", &x, &y); /* Read two floating-point numbers */
    fsum = x + y;   /* Calculate the sum */
    fdifference = x - y; /* Calculate the difference */
    printf("%.1f %.1f\n", fsum, fdifference); /* Print the sum and difference with one decimal place */
    
    return 0; /* Indicate successful execution */
}
