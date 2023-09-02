#include<stdio.h>
// int main()
// {
//     int arr[5];
//     arr[0]=1;
//     arr[1]=34;
//     arr[2]=54;
//     arr[3]=43;
//     arr[4]=3;
//     //printf("%d",arr[3]);
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

                //taking input from user in array
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the  elements of the array : \n");
    for(int i=0;i<5;i++)
    {
        int a=i+1;
        printf("Enter element number %d ",a);
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}