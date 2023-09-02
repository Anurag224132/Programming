//find the sum of a given matrix of n*m
#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);    
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    printf("Enter all the elements of this array:\n");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //printf("Enter the element for (%d,%d):",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
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
    printf("The sum of the given array is %d",sum);



    return 0;
}