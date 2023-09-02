#include<stdio.h>
int main()
{
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a is %d and value of b is %d",a,b);
    return 0;
}