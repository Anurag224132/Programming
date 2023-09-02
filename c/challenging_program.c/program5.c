#include<stdio.h>
int main()
{
    int h;
    int arr[5]={4,2,6,9,1};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                h=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=h;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}