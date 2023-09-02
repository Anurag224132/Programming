#include<stdio.h>
            //by for loop
// int factorial(int n)
// {
//     int fact=1;
//     for (int i=2;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }


            //by recursion


int factorial(int n)
{
    if (n==1 || n==0) //base case
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf(" Factorial of %d is %d",n,fact);
    return 0;
}