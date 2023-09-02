//calculate the product of all the elements in the given array

#include<stdio.h>
int main()
{
    int s=1;
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
        printf("%d ",ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        s=s*ar[i];
    }
    printf("\nSum of all the elements present in the array is: %d",s);
}