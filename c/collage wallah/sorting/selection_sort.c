#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main()
{
    int arr[7]={7,4,9,8,3,2,5};
    int n=7;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //selection sort
    for(int i=0;i<n-1;i++)
    {
        int min= INT_MAX;
        int mdx=-1;
        for(int j=i;j<=n-1;j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                mdx=j;
            }
        }
        //swap the min and first element of unsorted part
        // swap mdx and i
        int temp=arr[mdx];
        arr[mdx]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}