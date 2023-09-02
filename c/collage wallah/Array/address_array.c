#include<stdio.h>
int main()
{
    int arr[5]={1,23,4,5,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n\n",&arr[4]);



     
    for(int i=0;i<5;i++)
    {
        printf("%p\n",&arr[i]);
    }
    return 0;
}