#include<stdio.h>
int powerlog(int a,int b)
{
    
    if(b==1) return a;
    if(b==0) return 1;
    int x;
    x=powerlog(a,b/2);
    if(b%2==0)
    {
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main()
{
    int a;
    int b;
    printf("Enter the base value: ");
    scanf("%d",&a);
    printf("Enter the exponent value: ");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;

}