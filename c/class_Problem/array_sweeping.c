#include<stdio.h>
int main()
{
    char a[]={'a','n','u','r','a','g'};
    int i,j;
    char hold;
    for(i=0;i<5;i++)
    {
        for(j=0;j<6-i-1;j++)
        {
            if(a[j]>a[j+1])
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
        }
    }
    printf("data in accending order \n");
    for(i=0;i<=5;i++)
    {
        printf("%c",a[i]);
    }
}