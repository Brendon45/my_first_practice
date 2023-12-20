#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: A program that adds a node at the end without traversing the linked list
 * Return: 0 (Success)
*/

struct node
{
    int data;
    struct node *link;
};

struct node* add_node(struct node *ptr, int data);
void print_data(struct node *head);

int main(void)
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_node(ptr, 15);
    ptr = add_node(ptr, 20);
    ptr = add_node(ptr, 35);

    /*Assigning the value of head to ptr so that we can use ptr to traverse the linked list when printing data */
    ptr = head;

    /*Printing the data of the created linked list */
    print_data(head);

    free(head);
    free(current);
    return (0);
}

/**
 * Function to add a node at the end;
 * @ptr: Pointer to the new node to be added to the list
 * @data: Data of the new node to be inserted
*/
struct node* add_node(struct node *ptr, int data)
{
    struct node *tmp = NULL;

    tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->link = NULL;

    ptr->link = tmp;

    return (tmp);
}

/**
 * Function that prints the data of the linked list
 * @head: Pointer to the first node of the list
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
