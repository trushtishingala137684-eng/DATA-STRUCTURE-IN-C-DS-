#include<stdio.h>

int main()
{
    int a=10;
    int *p;
    p=&a;

    printf("address of a is %d\n",p);
    printf("value of a is %d\n",*p);

    return 0;
}
