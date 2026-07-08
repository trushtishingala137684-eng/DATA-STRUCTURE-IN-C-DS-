#include<stdio.h>

int main()
{
    int a[10],i,s;
    printf("Enter 10 value");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("10 value are \n");
        for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the value want to search");
    scanf("%d",&s);
    for(i=0;i<=9;i++)
    {
        if(s==a[i])
        {
            break;
        }
    }
    if(i==10)
    {
        printf("value is not found");
    }
    else
    {
        printf("value found at location %d",i+1);
    }

    return 0;
}
