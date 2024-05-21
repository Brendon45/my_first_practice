#include <stdio.h>

int main(void) {
    int array[20];
    int size, i, position;

    /*Prompt the user to enter the size of the array*/
    printf("Enter the size of the array, not more than 20: ");
    scanf("%d", &size);

    /*Check if the size is within the valid range*/
    if (size < 1 || size > 20) {
        printf("Invalid size. Please enter a size between 1 and 20.\n");
        return 1;
    }

    /*Prompt the user to enter the elements of the array*/
    printf("\nEnter the elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    /*Prompt the user to enter the position of the element to be deleted*/
    printf("\nEnter the position you want to delete the element: ");
    scanf("%d", &position);

    /*Check if the position is within the valid range*/
    if (position > size || position < 1) {
        printf("Position out of bound\n");
    } else {
        /*Shift elements to the left to overwrite the element at the given position*/
        for (i = position - 1; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;  /*Decrease the size of the array by one*/
    }

    /*Print the new array after deleting the element*/
    printf("\nNew array is [");
    for (i = 0; i < size; i++) {
        if (i != 0) {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("]\n");

    return 0;
}