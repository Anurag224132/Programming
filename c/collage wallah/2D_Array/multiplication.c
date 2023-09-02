#include<stdio.h>
int main()
{
    printf("Enter the rows of M1:");
    int r;
    scanf("%d",&r);
    printf("Enter the columns of M1:");
    int c;
    scanf("%d",&c);
    int m1[r][c];
    printf("Enter the element in M1:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\n\nmatrix 1\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }


    //2nd  matrix input
    int r1;
    printf("Enter the rows of M2:");
    scanf("%d",&r1);
    printf("Enter the columns of M2:");
    int c1;
    scanf("%d",&c1);
    int m2[c][c1];
    printf("Enter the element in M1:");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("\n\nmatrix 2\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    if(r1!=c)
    {
        printf("row of 1st matrix and column of second martix must be same for multiplication");
    }
    else
    {
        int res[r][c1];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c1;j++)
            {
                res[i][j]=0;
                for(int k=0;k<c;k++)
                {
                    res[i][j]=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("\n\nmultiplication\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
    
    