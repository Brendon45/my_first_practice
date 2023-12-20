#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
 * Program that adds a node at a certain position in a list.
 * Assumption: The position where the new node need
s to be inserted is given
* Return: 0 (Success)
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *h);
void add_node_pos(struct node *h, int pos, int data);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 150;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 160;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 100;
    current->link= NULL;

    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 180;
    current->link = NULL;

    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 190;
    current->link = NULL;

    head->link->link->link->link = current;

    /* Calling the print data function to print the data of the existing linked list*/
    print_data(head);

    /**
     * Inserting a new node at the 4th position
    */
   add_node_pos(head, 4, 1317);

    /**
     * Printing the new list with new node inserted at the 4th position
    */
   print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function to add a node at a certain position
*/
void add_node_pos(struct node *h, int position, int data)
{
    struct node *ptr, *new;
    int i;

    ptr = h;
    new = malloc(sizeof(struct node));
    new->data = data;
    new->link = NULL;

    for(i = 1; i < (position - 1); i++)
    {
        ptr = ptr->link;
    }
    new->link = ptr->link;
    ptr->link = new;

}

/**
 * Function to print data of the nodes
*/
void print_data(struct node *h)
{
    struct node *ptr;
    if (h == NULL)
    {
        printf("The linked list is empty");
    }
    else
    {
        ptr = h;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
