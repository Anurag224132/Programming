// by for loop

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         printf("GOOD MORNING");
//         printf("\n");
//     }
//     return 0;
// }

        //by recursion
#include<stdio.h>

void decreasing(int n)
{
    if(n==0)
    return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}