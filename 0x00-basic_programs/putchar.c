#include <stdio.h>
/**
* Description: Program that prints alphabet characters from A to Z
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
    int character;

    for(character = 'A'; character <= 'Z'; character++)
    {
        putchar(character);
    }
    putchar('\n');
    return (0);
}
