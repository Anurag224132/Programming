//write a program to print the row number having the maximum sum in a given matrix

#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of colums:");
    scanf("%d",&c);
    int max=0;

    int m[r][c];
    printf("enter the elements in the matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            
            sum=sum+m[i][j];
        }

        if(sum>=max)
        {
            int temp;
            temp=sum;
            sum=max;
            max=temp;
        }

    }
    printf("%d",max);
    return 0;

}