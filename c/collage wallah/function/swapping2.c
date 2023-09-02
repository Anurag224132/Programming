#include<stdio.h>
int main()
{
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d and value of b is %d",a,b);
    return 0;
}