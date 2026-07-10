#include<stdio.h>

int main()
{
    int a[3],b[3],c[3],i;

    printf("enter  a values:\n");

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter b value:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("c= ");
    for(i=0;i<3;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
