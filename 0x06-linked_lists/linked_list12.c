#include <stdio.h>
#include <stdlib.h>

/**
 * Program that deletes a node at a certain position
 * Assumption: The position of the node to deleted is given
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
void delete_certain_node(struct node *head, int position);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 60;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 70;
    current->link= NULL;

    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 80;
    current->link = NULL;

    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    head->link->link->link->link = current;

    /* Calling the print data function to print the data of the existing linked list*/
    print_data(head);

    /**
     * Calling the delete node at a certain position function 
    */
   delete_certain_node(head, 500);
    /**
     * Printing the new list with the deleted last node 
    */
   print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function that deletes a certain node
*/
void delete_certain_node(struct node *head, int position)
{
    struct node *ptr = head;
    struct node *tmp = head;
    int i;

    if (head == NULL)
    {
        printf("The linked list is already empty\n");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        for ( i = 1; i < position - 1; i++)
        {
            tmp = ptr;
            ptr = ptr->link;
        }
        tmp = ptr->link;
        ptr->link = tmp->link;
        free(tmp);
        tmp = NULL;

    }
}
/**
 * Function to print data of the nodes
*/
void print_data(struct node *head)
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("The linked list is empty");
    }
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
