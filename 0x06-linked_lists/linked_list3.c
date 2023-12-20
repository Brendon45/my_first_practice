#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: Program that counts the number of nodes of a linked list
* Return: 0 (Success)
*/
struct node
{
    int data;
    struct node *link;
};

void node_count(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 200;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 300;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 400;
    current->link = NULL;
    head->link->link->link = current;

    /*Calling function that counts the nodes*/
    node_count(head);

    free(head);
    free(current);
    return (0);
}

void node_count(struct node *head)
{
    int count = 0;

    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;

        while(ptr != NULL)
        {
            count++;
            ptr = ptr->link;
        }
        printf("The number of nodes is: %d\n", count);
    }
}
