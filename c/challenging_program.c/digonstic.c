// *************
//  * * * * *          
//  *       *
//   *     *
//    *  *
//      *  
#include<stdio.h>
int main()
{
    int n;
    printf("This program is prefectly work for n=5.\n");
    printf("Enter the value of 3<n<=6:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       printf("*");
       printf(" ");
    }
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        //printf("*");
        int k;
        for(k=0;k<=i;k++)
        {
            printf(" "); 
        } 
        printf("*");
        // for(int m=0;m<n-m-2;m++)
        // {
        //     printf(" ");
        // }
        if(i+2<n)
        {
            for(int b=i;b<n-i-1;b++)
            {
                printf(" ");
            }
            printf(" *");
        }
        
        printf("\n");      
    }
    return 0;
}