#include <stdio.h>

/**
* main - Entry point
* Description:
* Return: 0 (Success)
*/

int sum(int num1, int num2);

int main(void)
{
    int result;
    int (*ptr)(int, int) = sum;
    result = (*ptr)(30, 20);

    printf("Sum is: %d\n", result);
    
    return (0);
}
int sum(int num1, int num2)
{
    return (num1 + num2);
}
