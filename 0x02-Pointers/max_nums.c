#include <stdio.h>

/**
* main - Entry Point
* Description:
* Return: 0 (Success)
*/

int main(void)
{
    int arr[] = {34, 12, 21, 54, 48, 817};

    int largest = *arr;
    printf("%lu\n", sizeof(arr) / (sizeof(typeof(arr[0]))));

    for (int index = 0; index < sizeof(arr) / (sizeof(typeof(arr[0]))); index++)
    {
        if (*(arr + index) > largest)
        {
            largest = *(arr + index);
        }
    }
    printf("Largest: %d\n", largest);
    
    return (0);
}
