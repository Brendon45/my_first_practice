#include <stdio.h>


/**
 * main - A program that ask's user how much they owe and prints the balance
 *
 * Return: On success(0)
*/

int main()
{
    int balance_owed;

    printf("Enter number of dollars owed: ");
    scanf("%d", &balance_owed);

    if (balance_owed == 0)
        printf("You owe nothing.\n");
    else
        printf("You owe %d dollars.\n", balance_owed);

    return (0);
}