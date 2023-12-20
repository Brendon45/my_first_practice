#include <stdio.h>
#include <stdlib.h>

/**
 * Program that deletes the entire list
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
struct node *delete_entire_list(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 6;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 7;
    current->link= NULL;

    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 8;
    current->link = NULL;

    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;

    head->link->link->link->link = current;

    /* Calling the print data function to print the data of the existing linked list*/
    print_data(head);

    /**
     * Calling the function that deletes the whole list
    */
   head = delete_entire_list(head);

    /**
     * Printing the new list with the deleted last node 
    */
   print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function that deletes an entire list
*/
struct node *delete_entire_list(struct node *head)
{
    struct node *ptr = head;

       while (ptr != NULL)
       {
            ptr = ptr->link;
            free(head);
            head = ptr;
       } 
    return (head);
}

/**
 * Function to print data of the nodes
*/
void print_data(struct node *head)
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("The linked list is empty\n");
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
