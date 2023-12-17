#include <stdio.h>

/**
* main - Entry Point
* Question: What is the output of the following code
* Return: 0 (Success)
*/

int main(void)
{
    int a = 3;

    int b = ++a + a++ + --a;
    printf("Value of b is: %d\n", b);
    
    return (0);
}
