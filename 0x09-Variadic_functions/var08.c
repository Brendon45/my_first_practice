#include <stdio.h>
#include <stdarg.h>

/**
* main - Entry point
* Description:
* Return: 0 (Success)
*/

void print_something(char *format, ...);
int main(void)
{
    /* i -> integer*/
    /* s -> string */
    /* f -> float */
    /* c -> character */
    print_something("ishardyfcs", 60, "Hardy", 7.8, 'S', "Capizha");
    return (0);
}

void print_something(char *format, ...)
{
    va_list input;
    int index;

    va_start(input, format);

    for (index = 0; format[index] != '\0'; index++)
    {
        if (format[index] == 'i')
        {
            printf("%d", va_arg(input, int));
        }
        else if (format[index] == 's')
        {
            printf("%s", va_arg(input, char *));
        }
        else if (format[index] == 'f')
        {
            printf("%f", va_arg(input, double));
        }
        else if (format[index] == 'c')
        {
            printf("%c", va_arg(input, int));
        }
        else
        {
            printf("%c", format[index]);
        }
    }
    printf("\n");
    va_end(input);
}
