#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry Point
* Description: Program that define array of structure
* Return: 0 (Success)
*/

typedef struct Student
{
    int regno;
    char name[20];
    float mark;
} Student;

int main(void)
{
    Student student[3];
    int index;

    for (index = 0; index < 3; index++)
    {
        printf("Enter details for student %d:\n", index + 1);
        printf("Enter Registration Number: ");
        scanf("%d", &student[index].regno);
        printf("Enter name: ");
        scanf("%s", student[index].name);
        printf("Enter mark: ");
        scanf("%f", &student[index].mark);
         printf("-------------------------------------------------\n");
    }

    index = 0;
    while (index < 3)
    {
        printf("Student %d details\n", index + 1);
        printf("----------------------------------------------------\n");
        printf("Reg Number: %d\n", student[index].regno);
        printf("Name: %s\n", student[index].name);
        printf("Mark: %f\n", student[index].mark);
        printf("---------------------------------------------------\n");
        index++;
    }
    
    return (0);
}
