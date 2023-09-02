#include<stdio.h>
#include<math.h>
int  main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int power=pow(a,2);
    printf("The power is: %d",power);
    return 0;
}