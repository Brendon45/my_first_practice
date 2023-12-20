#include <stdio.h>
#include <stdlib.h>

/**
 * Description: Program that adds a node at the begining of the list
*/

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
struct node* add_node_at_beginning(struct node *head, int data);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 33;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 44;
    current->link = NULL;
    head->link->link->link = current;

    /*Printing the old node */
    print_data(head);

    /**
     * Inserting a new node at the begining of the linked list
     * struct node *ptr = malloc(sizeof(struct node));
     * ptr->data = 50;
     * ptr->link = head;
     * head = ptr;
     */
    
    
    head = add_node_at_beginning(head, 133);

    /* Prining the linked list with the newly inserted node */
    print_data(head);

    free(head);
    free(current);

    return (0);
}

/**
 * Function that adds a node at the begining of a linked list
*/
struct node* add_node_at_beginning(struct node *head, int data)
{
    struct node *ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;

    head = ptr;

    return head;

}

/**
 * Function that prints the data of the linked list
*/
void print_data(struct node *head)
{
    struct node *ptr = NULL;

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
