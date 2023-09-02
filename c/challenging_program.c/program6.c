#include<stdio.h>
int main()
{
    int h;
    char arr[5]={'d','b','a','c'};
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
        printf("%c ",arr[i]);
    }
    return 0;
}