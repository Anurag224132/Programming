#include<stdio.h>
int main()
{
    // int r[4][3];  //={1,2,3,4,5,6,7,8,9,10,11,12};
    // int i,j;
    // printf("enter the number in row column form:");
    // for(i=0;i<4;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         scanf("%d ",&r[i][j]);
    //     }
    // }
    // for(i=0;i<4;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         printf("%d\t",r[i][j]);
    //     }
    //     printf("\n");
    // }
    int r[3][3]; 
    int s[3][3];
    int result[3][3];
    int i,j;
    printf("enter the elements of the matrix r");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
        {
         scanf("%d ",&r[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of the matrix s");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
        {
         scanf("%d ",&r[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            result[i][j] = r[i][j] + s[m][n];
        }
    }
    printf("\nSum of the matrices:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}