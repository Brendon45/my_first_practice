#include <stdio.h>

/**
 * Main function to demonstrate inserting an element into an array at a specified position
 */
int main(void)
{
    int array[30];  /*Declare an array of size 30*/
    int size, position, i, element;

    /*Prompt the user to enter the size of the array*/
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    /*Check if the size is within the valid range*/
    if (size < 1 || size > 29) {
        printf("Invalid size. Please enter a size between 1 and 29.\n");
        return 1;
    }

    /*Prompt the user to enter the elements of the array*/
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    /*Display the current elements in the array*/
    printf("The elements in the array are [");
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    /*Prompt the user to enter the element to insert*/
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    /*Prompt the user to enter the position to insert the element*/
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    /*Check if the position is valid*/
    if (position < 1 || position > size + 1) {
        printf("The position is invalid\n");
        return 1;
    } else {
        /*Shift elements to the right to make space for the new element*/
        for (i = size - 1; i >= position - 1; i--) {
            array[i + 1] = array[i];
        }
        /*Insert the new element at the specified position*/
        array[position - 1] = element;
        size++;  /*Increment the size of the array*/
    }

    /*Display the new elements in the array*/
    printf("The elements in the array now are [");
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}