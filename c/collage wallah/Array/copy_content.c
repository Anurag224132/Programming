//write a program to copy the contents of one array into another in the reverse order;

#include<stdio.h>
int main()
{
    printf("enter the size of the array:");
    int n;
    int arr[n];
    scanf("%d",&n);
    printf("enter the elements in the array of size %d\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("First array is {");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}\n");
    int ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i]=arr[i];
    }
    printf("second array is {");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
    printf("}");
    
}