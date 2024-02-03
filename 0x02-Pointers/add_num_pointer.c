#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry Point
* Description: Program that adds two integers using pointers. it has a function that accepts the addresses and adds the numbers in these addresses
* Return: 0 (Success)
*/

int addNumbers(int *a, int *b);

int main() {
    int num1 = 2, num2 = 3;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    
  addNumbers(ptr1, ptr2);
    printf("Sum is: %d\n", num1 + num2);

    return 0;
}
int addNumbers(int *a, int *b){
    *a = 20;
    *b = 30;
    
    return (*a + *b);
}
