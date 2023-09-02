// #include<stdio.h> 
// void fun(float a, float b, float c)
// {

// if (a>b && a>c)
// {
//     printf("a is smallest");
//     return ;
// }
// else if (b>a && b>c)
// {
//     printf("a is smallest");
//     return;
// }
// else
//     printf("a is smallest");
//     return ;
// }
// int main()
// {
//     fun(23.45,45.56,7.89);
// }

// #include<stdio.h>
// int main()
// {
//    call();
//    call();

// }
// call()
// {
//     auto int i=0;
//     register int j=0;
//     static int k=0;
//     i++;j++;k++;
//     printf("\n %d %d %d",i,j,k);
// }
//create a function which will take 3 intergers from the user and they will perform a cyclic shift by call by address
#include<stdio.h>
void swap(int *x, int *y,int *z)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping using call by reference: a = %d, b = %d\n,c = %d\n", *x, *y, *z);
}
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    swap(a,b,c);
    printf("After swapping using call by reference: a = %d, b = %d\n,c = %d\n", *x, *y, *z);
    return 0;
}