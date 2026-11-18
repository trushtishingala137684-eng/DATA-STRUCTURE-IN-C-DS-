

#include<stdio.h>
int stack[MAX] , top = -1;
void push()
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter value :");
        scanf("%d", &x);
        stack[++top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty !");
    }
    else
    {
        printf("Deleted: %d\\n", stack[top--]);
    }
}
void print()
{
    if (top == -1)
    {
        printf("Stack is empty !");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}
int main()
{
    int choice ;
    while (choice <= 4)
    {
        printf("Enter choice (For push 1, pop 2, print 3 and exit 4)");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                printf("You have ended the program !");
                break;
            default:
                printf("Invalid choice !");
        }
    }
}
