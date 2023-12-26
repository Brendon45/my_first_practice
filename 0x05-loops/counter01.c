#include <stdio.h>

int main(void)
{
    int x, i;

    for (x = 1; x <= 5; ++x)
    {
        printf("%d\n", x);
    }
    i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        ++i;
    }
    return (0);
}
