#include<stdio.h>
int main()
{
    char arr[]="Hello World is best";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;

}