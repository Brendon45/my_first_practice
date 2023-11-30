#include <stdio.h>

/**
* main - Entry point
* Description - Program that increment a negative number and change its sign up to 0
* Return: 0
*/

int main(void)
{
    int arr[] = {40, 20, 10, 50, 30};
    int *ptr;

    ptr = &arr[0];

    printf("arr[0]: %d\n", arr[0]);
    printf("arr[0]: %d\n", *ptr);

    //ptr = ptr + 1;
    //printf("arr[1]: %d\n", *ptr);

    for (ptr = arr; ptr <= &arr[4]; ptr++)
    {
        printf("%d ", *ptr);   
    }

    return (0);
}
