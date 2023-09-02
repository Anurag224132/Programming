//Given an n*m matrix 'a', print all elements of the matrix in spiral order

#include<stdio.h>
int main()
{
    printf("Enter the rows of M:");
    int r;
    scanf("%d",&r);
    printf("Enter the columns of M:");
    int c;
    scanf("%d",&c);
    int m[r][c];
    printf("Enter the element in M:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n\nmatrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    //spiral print
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int t=r*c;
    int count=0;

    printf("Spiral printing given below:");
    while(count<t)
    {
        //print min row
        for(int j=minc;j<=maxc;j++)
        {
            printf("%d ",m[minr][j]);
            count++;
        }
        minr++;
        if(count>=t) break;

        //print max column
        for(int i=minr;i<=maxr;i++)
        {
            printf("%d ",m[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=t) break;

        //print max row
        for(int j=maxc;j>=minc;j--)
        {
            printf("%d ",m[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=t) break;

        //print min column
        for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",m[i][minc]);
            count++;
        }
        minc++;
        if(count>=t) break;



    }



    return 0;
}