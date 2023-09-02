//write a program to print the transpose of a matrix enterend by the user and store it in seperate matrix
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
            printf("Enter the element for (%d,%d):",i,j);
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
    int temp;
    temp=r;
    r=c;
    c=temp;
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat[i][j]=arr[j][i];
            
        }
    }
    printf("%d ",mat[1][1]);

    return 0;
}