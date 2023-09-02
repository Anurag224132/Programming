#include<stdio.h>
int main()
{
    int a[8];
    int i;
    printf("Enter the numbers in array:\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=a[i]+1;
        }
    }
    for(i=0;i<8;i++){
        printf("%d\n",a[i]);
    }
}