#include<stdio.h>

int main()
{
    int A[10],largest,i,c;

    printf("ENTER 10 VALUE:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    largest=A[0];

    for(i=0;i<10;i++)
    {
        if(A[i]>largest)
        {
            largest=A[i];
        }
    }

        printf("largest value=%d",largest);

    return 0;
}

