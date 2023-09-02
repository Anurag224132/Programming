//Rotate the given array 'a' by k steps , where k is non-negative.
//NOTE: k can be greater than n as well as where n is the size of array 'a'.
#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int  main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("{");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}");

    int k;
    printf("\nEnter the value of k:");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    printf("{");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}");
    return 0;
}
