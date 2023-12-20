#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Dscription: Creating a simple node in c
* Creating a self referencial structure to represent node elements
* Note that a node consist of 2 parts, data part and link part
* Return: 0 (Success)
*/
struct node
{
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));

    head->data = 90;
    printf("%d\n", head->data);
    printf("%p\n", head);

    return (0);
}
