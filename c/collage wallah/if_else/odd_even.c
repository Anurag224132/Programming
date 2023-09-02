#include<stdio.h>
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    if(a%2==0)
    { 
        printf("given number is even");
    }
    else
    {
        printf("given number is odd");
    }
    return 0;
}