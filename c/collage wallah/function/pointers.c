// #include<stdio.h>
// int main()
// {
//     float x=20.34;
//     float n=456.78;
//     printf("%d\n",x);
//     printf("%u\n",&x);
//     float *y;
//     y=&x;
//     printf("%u\n",y);
// //address is always integer ;
//     printf("%f\n",*y);
//     printf("%f",*(&x));
//     y=&n;
//     printf("\n%f",*y);
//     return 0;
// }


// #include<stdio.h>
// void process(int *p,int *q)
// {
//     *p=*p+2;
//     *q=*q+2;
//     printf("inside the fun values are");
//     printf("%d%d",*p,*q);

// }
// int main()
// {
//     int a,b;
//     printf("enter  the data");
//     scanf("%d%d",&a,&b);
//     printf("inside main %u %u",&a,&b);
//     process(&a,&b);
//     printf("inside the main fun values are");
//     printf("%d%d",a,b);
//     return 0;
// }

// #include<stdio.h>
// int show();
// void main()
// {
//     int a;
//     a=show();
//     printf("%d",a);

// }

// int show()
// {
//     return 15.5;
//     return 35;

// }


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float x=25.25;
//     printf("%f\n",ceil(x));
//     printf("%f\n",floor(x));

// }

#include <stdio.h>


void swapCallByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping using call by value: x = %d, y = %d\n", x, y);
}


void swapCallByReference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping using call by reference: x = %d, y = %d\n", *x, *y);
}

int main()
{
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

   
    swapCallByValue(x, y);

   
    printf("Values after call by value swap: x = %d, y = %d\n", x, y);

   
    swapCallByReference(&x, &y);

  
    printf("Values after call by reference swap: x = %d, y = %d\n", x, y);

    return 0;
}
