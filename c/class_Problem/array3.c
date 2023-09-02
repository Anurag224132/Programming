#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++)
    {
        if(a[i]%5==0)
        a[i]=-1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }



    return 0;
}