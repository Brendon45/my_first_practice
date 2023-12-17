#include <stdio.h>

/**
* main - Entry point
* Description: Program that prints command line arguements using the argument count
* Return:0 (Success)
*/

int main(int argc, char *argv[])
{
    int index;

    for(index = 0; index < argc; index++)
    {
        printf("%s\n", argv[index]);
    }
    return (0);
}
