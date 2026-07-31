#include<stdio.h>

char stack[10];
char top=-1;

void push(char b)
{
    top++;
    stack[top]=b;
}

char pop()
{
    char v;
    v=stack[top];
    top--;
    return v;

}

void main()
{
    int i,l;

    char name[10],val;
    printf("enter your name:");
    gets(name);
    l=strlen(name);


    for(i=0;i<=l-1;i++)
    {
        push(name[i]);
    }

    for(i=0;i<=l-1;i++)
    {
        val=pop();
        printf("%c",val);
    }

return 0;
}
