#include<stdio.h>
int main()
{
    float a[20];
    int x;
    printf("enter the size of array");
    scanf("%d",&x);
    int i;
    printf("enter the data in array of size x\n");
    for(i=0;i<x;i++)
    {
        scanf("%f",&a[i]);
        //printf("%d\n",&a[i]);
    }
    float largest;
    largest=a[0];
    for(i=1;i<x;i++)
    {
        if (largest<a[i])
        largest=a[i];
    }
    printf("largest is :%f",largest);

    return 0;
}