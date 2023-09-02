//  Weite a program to change the given n*n matrix to its transpose
//write a program to print the transpose of a matrix enterend by the user
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

    
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)//j starting from i here 
        {
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;  
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