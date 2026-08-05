#include<stdio.h>
#define MAX 10

int queue[MAX-1];
int front = -1, rear = -1;

void insert()
{
    int number;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {

         if (front == -1)
            front = 0;

        printf("Enter element: ");
        scanf("%d", &number);

        rear++;
        queue[rear] = number;

        printf("Element inserted successfully.\n");
    }

}
void delete()
{
    int number;
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = front+1;
        }
    }
}
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main()
{
    int choice;

    do
    {
        printf("\n--- SIMPLE QUEUE ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Ended.\n");
                exit(0);
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 4);

    return 0;
}


