
// #include<stdio.h>
// int  main()
// {
//     int n;
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements in the array:\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("{");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("}\nAfter swapping array is:- ");
//     for(int i=1,j=4;i<=j;i++,j--)
//     {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }

//     printf("{");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("}");
//     return 0;
// }

//above code by function;
#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int  main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("{");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}\nAfter swapping array is:- ");
    

    reverse(arr,1,4);

    printf("{");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}");
    return 0;
}
