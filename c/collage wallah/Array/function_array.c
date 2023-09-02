//array function me hamesha pass by reference hota hai jo ki 1st element ka address hota hai;

#include<stdio.h>
void fun(int x[])
{
    x[0]=10;
    return;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}