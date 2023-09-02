//print increasing and decreasing order for n i.e 1,2,3,4,5......
#include<stdio.h>
void increasing(int x,int n)
{
    if (x>n)
    {
        return;
    }
    else
    {
        printf("%d\n",x);
        increasing(x+1,n);
        return;
    }

}
int main()
{
    printf("enter the number: ");
    int n;
    scanf("%d",&n);
    increasing(1,n);
    return 0;

}