#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[5];
        int no_of_pages;
        float price;
    }a,b,c;

    a.no_of_pages=100;
    a.price=411.5;
    strcpy(a.name,"Seceret Seven");
    printf("%d\n",a.no_of_pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    
}