// #include<stdio.h>
// int main()
// {
//     int *ptr;
//     int n;
//     printf("enter the size of array you wanat to create\n");
//     scanf("%d",&n);
//     ptr=(int*)malloc(10*sizeof(int));
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("enter the value %d of this array\n");
//         scanf("%d",&ptr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("the value at %d of this array is %d\n",i,ptr[i]);

//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
    
    int i;
    for (i=0;i<n;i++)
    {
        printf("Enter the value %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr); 

    return 0;
}
