#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
    {
        
        return 1;
    }
    // int ans1=;
    // int ans2=;
    // int ans=ans1+ans2;
    return fibo(n-1)+fibo(n-2); 
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("fibonaaci of %d is %d",n,fibo(n));
    return 0;
}