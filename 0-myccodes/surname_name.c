#include <stdio.h>
#include <string.h>

/**
 * main - A program that prints name and surname.
 * Return: On success (0)
*/

int main(void)
{
    char name[50], surname[50], full_name[100];

    strcpy(name, "Brendon");
    strcpy(surname, "Jeje");

    strcpy(full_name, name);
    strcat(full_name, " ");
    strcat(full_name, surname);
    printf("My name is %s\n", full_name);

    return (0);
}