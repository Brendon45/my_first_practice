#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
 * Program that deletes the last node of a linked list
* Return: 0 (Success)
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
struct node *delete_last_node(struct node *head);

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
    current->data = 80;
    current->link = NULL;

    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;

    head->link->link->link->link = current;

    /* Calling the print data function to print the data of the existing linked list */
    print_data(head);

    /**
     * Calling the delete last node function and assign the new last node returned to the tmp
    */
   head = delete_last_node(head);

    /**
     * Printing the new list with the deleted last node 
    */
   print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function that deletes the first node of a linked list
*/
struct node *delete_last_node(struct node *head)
{
    struct node *ptr = head;
    struct node *tmp = head;

    if(head == NULL)
    {
        printf("The linked list is already empty\n");
    }
    else if (head->link = NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        ptr = head;
        while (ptr->link->link != NULL)
        {
            ptr = ptr->link;
        }
        tmp = ptr->link;
        ptr->link = NULL;
        free(tmp);
        tmp = NULL;

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
