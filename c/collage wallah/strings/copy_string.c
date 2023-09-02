#include<stdio.h>
#include<string.h>
int main()
{
    char ar[]="Physics Wallah";
    char *a=ar;
    ar[0]='M';
    printf("%s",a);
    return 0;
}