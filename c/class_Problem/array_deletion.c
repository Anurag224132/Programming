#include<stdio.h>
int main()
{
    printf("enter the array elements of size 10: \n");
    int a[10];
    int m;
    for(m=0;m<10;m++)
    {
        scanf("%d",&a[m]);
    }
    int pos,i;
    printf("enter the position for deletion: ");
    scanf("%d",&pos);
    for(i=pos-1;i<9;i++)
    {
        a[i]=a[i+1];

    }
    for(i=0;i<9;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}


