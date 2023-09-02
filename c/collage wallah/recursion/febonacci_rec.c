// write a program to calculate the nth fibonaaci series using recursion and as well as by loop
#include<stdio.h>
int fibo(int a)
{
    if(a==1 || a==2)
    {
        
        return 1;
    }
    else
    {
        return fibo(a-1)+fibo(a-2);
    }
}
int main()
{
    int a;
    printf("Enter the number upto which you want to find the fibonaaci series: ");
    scanf("%d",&a);
    printf("fibonaaci of %d is %d",a,fibo(a));
    return 0;

}