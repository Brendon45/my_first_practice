#include <stdio.h>
#include <stdarg.h>

/**
* main - Entry point
* Description:
* Return: 0 (Success)
*/

void print_strings(const char *separator, const unsigned int n, ...);

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 2, "Jay", "Hardy");
    print_strings(", ", 2, "", "Django");
    
    return (0);
}

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int index;
    va_list str;
    
    va_start(str, n);
    for (index = 0; index < n; index++)
    {
        printf("%s", s);
        if ((index != (n - 1)) && (separator != NULL))
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(str);

}
