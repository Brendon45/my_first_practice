#include <stdio.h>

int main(void)
{
    char name[] = "Brendon";
    char *ptr;
    ptr = name;

    int i = 0;

    while(ptr[i] != '\0')
    {
        printf("%c", ptr[i]);
        i++;
    }
    printf("\n");
    for(int j = 0; ptr[j] != '\0'; j++)
    {
        printf("%c", ptr[j]);
    }
    printf("\n");
    return 0;
}
