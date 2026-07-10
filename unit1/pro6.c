#include<stdio.h>

int main()
{
    int A[10],n,i,pos,x;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    scanf("%d%d",&pos,&x);

    for(i=n;i>=pos;i--)
    {
        A[i]=A[i+1];
    }
    A[pos+1]=x;

    for(i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }

    return 0;
}

