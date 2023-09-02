//Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    int sum=0;
    for(int i=0;i<=19;i++)
    {
        sum=sum+arr[i];
    }
    int s=0;
    for(int i=0;i<=20;i++)
    {
        s=s+i;
    }
    printf("%d",s-sum);
    return 0;
}