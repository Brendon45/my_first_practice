#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Program that deletes the first node of a linked list
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
struct node *delete_first_node(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 500;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 600;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 700;
    current->link= NULL;

    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 800;
    current->link = NULL;

    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 900;
    current->link = NULL;

    head->link->link->link->link = current;

    /* Calling the print data function to print the data of the existing linked list */
    print_data(head);

    /**
     * Calling the delete head and assign the new head returned to the head
    */
   head = delete_first_node(head);

    /**
     * Printing the new list with the deleted first node 
    */
   print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function that deletes the first node of a linked list
*/
struct node *delete_first_node(struct node *head)
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("The list is already empty\n");
    }
    else
    {
        ptr = head;
        head = head->link;
        free(ptr);
        ptr = NULL;

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
