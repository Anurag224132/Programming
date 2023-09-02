#include<stdio.h>
int main()
{
    int x=5,y=7;
    int* a=&x;
    int* b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}