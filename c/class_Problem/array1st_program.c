// #include<stdio.h>
// int main()
// {
//     int x[10],n,i,sum=0;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     printf("Enere array elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&x[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         sum=sum+x[i];

//     }
//     printf("\n sum of array elements is: %d",sum);
//     for(i=0;i<n;i++)
//     {
//         sum=sum/10;
//     }
//     printf("average of the array is: %f",sum);
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a[5],i,count=0;
    printf("Enter the numbers of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if (a[i]<0)
        { 
            count=count+1;
        }
    }
    printf("%d",count);
}