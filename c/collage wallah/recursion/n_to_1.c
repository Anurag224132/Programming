#include<stdio.h>
void dec(int a)
{
    if(a<=0)
    {
        return;
    }
    else
    {
        printf("%d\n",a);
        dec(a-1);
        return;

    }
}
int main()
{
    printf("Enter the number: ");
    int a;
    scanf("%d",&a);
    dec(a);
    return 0;

}
