#include <stdio.h>

/**
* main - Entry Point
* Description: 
* Return 0 (Success)
*/

void myname(void);
void reset_to_98(int *n);
int main(void)
{
    int n;

    n = 402;
    
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    myname();
    return (0);
}
void reset_to_98(int *n)
{
    *n = 98;
}
void myname(void)
{
    printf("My name is Tendai.\n");
}
