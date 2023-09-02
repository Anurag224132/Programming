// given an array of integers with 1 to n elements and the size of the array is n+1.One element is occuring more than once i.e duplicate number is present. Find the duplicate element.
#include<stdio.h>
int main()
{
    printf("Enter the size of the array");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]==a[j])
    //         {
    //             printf("%d",a[j]);
    //             break;
    //         }
    //     }
    // }
    
    return 0;
}