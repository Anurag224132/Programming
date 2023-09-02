//find the maximum value out of all the element in the given array

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
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    printf("maximum element in the given array is %d",max);
    return 0;
}