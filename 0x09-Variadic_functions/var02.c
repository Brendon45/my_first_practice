#include <stdio.h>
#include <stdarg.h>

/**
* main - Entry point
* Description:
* Return: 0 (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...);

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    print_numbers(", ", 10, 0, 98, -1024, 402, 9, 19, 56, 45, 90, 100);
    print_numbers(" ", 10, 0, 98, -1024, 402, 9, 19, 56, 45, 90, 100);
    return (0);
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int index;
    va_list nums;
    
    va_start(nums, n);
    
    for(index = 0; index < n; index++)
    {
        printf("%d", va_arg(nums, int));
        
        if (index != (n-1))
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    
    va_end(nums);
}
