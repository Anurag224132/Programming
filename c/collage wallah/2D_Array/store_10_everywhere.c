//write a program to sote 10 at every index of a 2D matrix with 5 rows and 5 columns
#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);    
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //printf("Enter the element for (%d,%d):",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}