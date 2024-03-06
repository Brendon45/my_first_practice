#include <stdio.h>

/**
 * main - A program that converts Celcius to Fahrenheit degrees
 *
 * Return: On success(0).
*/

int main(void)
{
    float celcius, fah;

    
    printf("Enter the celcius: ");
    scanf("%f", &celcius);

    fah = (celcius * 9) / 5 + 32;

    printf("%.2f Celcius is equal to %.2f Fahrenheit degrees.\n", celcius, fah);
}