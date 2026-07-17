
p7.c

Page
1
/
1
100%
#include<stdio.h>

int main()
{
    int a[10],i,j,pos,temp,n=10;

    printf("\n Enter 10 elements: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter position to delete(1-10): ");
    scanf("%d",&pos);

    for(i=pos-1;i<n;i++)
    a[i]=a[i+1];

    n--;


    printf("\n array after deletion : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
Displaying p7.c.
