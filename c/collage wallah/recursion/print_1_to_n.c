// #include<stdio.h>

// void increasing(int x ,int n)
// {
//     if (x>n)
//     {
//         return;
    
//     }
//     else
//     {
//         printf("%d\n",x);
//         increasing(x+1,n);
//         return;
//     }
// }


// int main()
// {
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;
// }

        //print 1 to n after recursive call 


#include<stdio.h>

void decreasing(int n)
{
    if(n==0) //base case
    return;
    decreasing(n-1);//call
    printf("%d\n",n);//code
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















