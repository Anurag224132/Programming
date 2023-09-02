//Given an array of integers ,change the value of all odd indexed elements to its second multiple and increments all even indexed value by 10

#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }


    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            ar[i]=ar[i]*2;

        }
        else
        {
            ar[i]=ar[i]+10;
        }
    
    }
        printf("so the updated array is :\n");
        for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}