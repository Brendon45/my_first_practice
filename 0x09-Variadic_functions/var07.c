#include <stdio.h>
#include <stdarg.h>

/**
* main - Entry point
* Description:
* Return: 0 (Success)
*/

void print_something(int n, ...);

int main(void)
{
    print_something(5, 60, "Hardy", 7.8, 'S', "Capizha");
    return (0);
}
void print_something(int n, ...)
{
    va_list names;

    va_start(names, n);

    printf("%d ", va_arg(names, int));
    printf("My name is: %s ", va_arg(names, char *));
    printf("%f ", va_arg(names, double));
    printf("%c ", va_arg(names, int));
    printf("%s ", va_arg(names, char *));
    printf("\n");

    va_end(names);
}
