#include <stdio.h>
#include <stdarg.h>

char print(int args, ...);
int main(void)
{
    add(3, 'A', 'B', 'C');
    return (0);
}

char print(int args, ...)
{
    va_list nums;

    va_start(nums, args);

    int i, sum = 0;
    char names[3];
    for(i = 0; i < args; i++)
    {
         names[3] = va_arg(nums, char);
    }

    va_end(nums);
    return (names[3]);

}
