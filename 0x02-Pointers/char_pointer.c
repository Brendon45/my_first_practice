#include <stdio.h>

/**
* main - Entry Point
* Description:
* Return: 0 (Success)
*/

void modify_me(char *cc, char ccc){
    *cc = 'o';
    ccc = 'l';
}

int main(void)
{
    char c, res[20];
    char *p;

    c = 'H';
    p = &c;
    modify_me(p, c);
    printf("Values: %c \n", c);

    return (0);
}
