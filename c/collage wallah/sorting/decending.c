#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print array
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //bubble sorting for decreasing of the array
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(arr[j]>arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    printf("\nsorted array is given below\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}