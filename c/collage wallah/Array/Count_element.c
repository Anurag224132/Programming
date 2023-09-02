// Count the number of elements in given array greater than a given number x.

#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n,a;
    int count=0;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("\nEnter the number which you want to check:");
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(a<ar[i])
        {
            count=count+1;
        }
    }
    printf("%d",count);
} 