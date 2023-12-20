#include <stdio.h>
#include <stdlib.h>

/**
 * Description: Program that adds a node at the end after traversing the list
*/

struct node
{
    int data;
    struct node *link;
};
void print_data(struct node *head);
void add_node(struct node *head, int data);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 25;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current;

    /* Printing data of the already created linked list */
    print_data(head);

    /*Adding a new node at the end of the linked list*/
    add_node(head, 75);

    /*Printing the new linked list, with added new node*/
    print_data(head);

    free(head);
    free(current);
    return (0);
}

void print_data(struct node *head)
{
    struct node *ptr = NULL;

    if(head == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        ptr = head;
        while(ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

void add_node(struct node *head, int data)
{
    struct node *ptr, *tmp;

    ptr = head;
    tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = tmp;
}
