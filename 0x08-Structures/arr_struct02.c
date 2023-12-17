#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* Desrciption:
* Return: 0 (Success)
*/

struct Member
{
    char name[30];
    int age;
    char gender;
};

int main(void)
{
    struct Member person[3];
    int i;
    char name[30];

    printf("Enter members detils:\n");
    //for(i = 0; i < 3; i++)
    //{
        printf("Enter the person 1 name: ");
        scanf("%s", name);
        printf("Enter the person 1 age: ");
        scanf("%d", &person[0].age);
        printf("Enter the person 1 gender: ");
        scanf(" %c", &person[0].gender);

        strcpy(person[0].name, name);

        printf("The person's name is: %s\n", person[0].name);
        printf("The person's age is: %d\n", person[0].age);
        printf("The person's gender is: %c\n", person[0].gender);

    return (0);
}
