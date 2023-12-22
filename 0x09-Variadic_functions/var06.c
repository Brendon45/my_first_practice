#include <stdio.h>
#include <stdarg.h>

/**
* main - Entry point
* Description - Function that takes variable number of arguments
* Return: 0 (Success)
*/

void print_something(int n, ...);
int main(void)
{
    print_something(5, 60, "Hardy", 7.8, 'S', "Hardazy");
    
    return (0);
}

void print_something(int n, ...)
{
    va_list input;
    int index;

    va_start(input, n);

    for (index = 0; index < n; index++)
    {
        printf("%s", va_arg(input, char *));
    }
    printf("\n");
    va_end(input);
}
