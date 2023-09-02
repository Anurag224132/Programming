#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;

}
int main()
{
    int a=2;
    printf("Enter a: ");
    scanf("%d",&a); //int*  --int ka address store karta hai
    //VVIP--*x=7;
    //int**y=&x;  int**  int* ka address store karta hai

    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("The value of a and b is %d,%d",a,b);
    return 0;
}