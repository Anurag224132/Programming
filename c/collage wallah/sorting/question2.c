//Given an array of integers numbers that is already sorted in non-decreasing order,find two numbers such that they add up to a specific target number

#include<stdio.h>
int main()
{
    int target;
    printf("enter the target number");
    scanf("%d",&target);
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
    // printf("\n");
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]+a[j]==target)
    //         {
    //             printf("%d + %d = %d\n",a[i],a[j],a[i]+a[j]);
    //         }
    //     }
    // }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==target)
        {
            printf("\nnumber found i.e \n");\
            printf("%d + %d = %d",a[i],a[j],a[i]+a[j]);
            break;
        }
        else if(a[i]+a[j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}