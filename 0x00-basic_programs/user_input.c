#include <stdio.h>
/**
* Description: A program that accepts user input
* main - Entry Point
* Return: 0 (Success)
*/

int main(void)
{
    char name[20];

    /*Accepting name from the user*/
    /*printf("Enter your name: ");
    scanf("%s ", name);
    printf("Your name is: %s \n", name);
    */
    /*printf("Enter your name: ");
    gets(name);
    printf("Your name is: %s \n", name);
    */
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is: %s \n", name);
    return (0);
}
