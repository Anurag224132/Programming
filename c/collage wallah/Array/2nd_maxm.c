//find the second maximum value out of all the element in the given array

#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    int smax=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     if(max<ar[i])
    //     {
    //         max=ar[i];
    //     }
    // }
    // for(int i=0;i<n;i++) 
    // {
    //     if(ar[i]!=max && smax<ar[i])
    //     {
    //         smax=ar[i];
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            smax=max;
            max=ar[i];
        }
        else if (smax<ar[i] && max!=ar[i])
        {
            smax=ar[i];
        }
    }
    printf("second maximum element in the given array is %d",smax);
    return 0;
}