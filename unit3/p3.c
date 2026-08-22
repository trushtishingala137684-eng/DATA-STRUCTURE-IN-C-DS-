#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start = NULL;


void insert_begin()
{
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;

    printf("Node inserted at beginning.\n");
}



void insert_end()
{
    struct Node *newnode, *ptr;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        ptr = start;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }

    printf("Node inserted at end.\n");
}




void insert_after()
{
    struct Node *newnode, *ptr;
    int value;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    printf("Enter the value after which to insert: ");
    scanf("%d", &value);

    ptr = start;

    while (ptr != NULL && ptr->data != value)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("Node not found.\n");
        free(newnode);

    }

    newnode->next = ptr->next;
    ptr->next = newnode;

    printf("Node inserted successfully.\n");
}



void insert_before()
{
    struct Node *newnode, *ptr, *preptr;
    int value;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    printf("Enter the value before which to insert: ");
    scanf("%d", &value);

    if (start == NULL)
    {
        printf("List is empty.\n");
        free(newnode);

    }

    if (start->data == value)
    {
        newnode->next = start;
        start = newnode;

        printf("Node inserted successfully.\n");

    }

    ptr = start;

    while (ptr != NULL && ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("Node not found.\n");
        free(newnode);

    }

    newnode->next = ptr;
    preptr->next = newnode;

    printf("Node inserted successfully.\n");
}





/* Display */
void display()
{
    struct Node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    ptr = start;

    printf("Linked List: ");

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}


int main()
{
    int ch;

    while (1)
    {
        printf("\n----- Singly Linked List -----\n");


        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");


        printf("3. Insert after specific node\n");
        printf("4. Insert before specific node\n");


       
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert_begin();
                break;

            case 2:
                insert_end();
                break;

            case 3:
                insert_after();
                break;

            case 4:
                insert_before();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Wrong choice!\n");
        }
    }

    return 0;
}