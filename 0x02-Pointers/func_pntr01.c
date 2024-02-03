#include <stdio.h>

/**
* main - Entry point
* Description: Program that adds 2 numbers using pointers
* Return: 0 (Success)
*/

int sum(int num1, int num2);

int main(void)
{
    int a = 10, b = 20;
    int *ptr;


    ptr = sum(a, b);

    printf("Sum is: %d\n", ptr);
    
    return (0);
}
int sum(int num1, int num2)
{
    return (num1 + num2);
}
