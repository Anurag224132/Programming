



#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the  elements of the array : \n");
    for(int i=0;i<5;i++)
    {
        int a=i+1;
        printf("Enter element number %d ",a);
        scanf("%d ",&arr[i]);
    }
    for(int i=5;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}