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
    print_something("%i%sh%ardy%f%c%s\n", 60, "Hardy", 7.8, 'S', "Capizha");
    printf("Hardmthereat%%\n");
    return (0);
}

void print_something(char *format, ...)
{
    va_list input;
    int index;

    va_start(input, format);

    for (index = 0; format[index] != '\0'; index++)
    {
        if (format[index] != '%')
        {
            printf("%c", format[index]);
        }
        else
        {
            switch(format[index + 1])
            {
                case 'i' :
                    printf("%d", va_arg(input, int));
                    index++;
                    break;
                case 's' :
                    printf("%s", va_arg(input, char *));
                    break;
                case 'c' :
                    printf("%c", va_arg(input, int));
                     break;
                 case 'f' :
                     printf("%f", va_arg(input, double));
                     break;
                 default :
                     printf("%c", format[index]);
             }   
        }
    }
    printf("\n");
    va_end(input);
}
