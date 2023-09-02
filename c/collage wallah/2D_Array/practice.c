#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of colums:");
    scanf("%d",&c);

    int m[r][c];
    printf("enter the elements in the matrix:");

    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int t=r*c;
    int count=0;

    

    while(count<t)
    {
        for(int j=minc;j<=maxc;j++)
        {
            scanf("%d",&m[minr][j]);
            count++;
        }
        minr++;
        if (count>=t) break;

        for(int i=minr;i<=maxr;i++)
        {
            scanf("%d",&m[i][maxc]);
            count++;
        }
        maxc--;
        if (count>=t) break;

        for(int j=maxc;j>=minc;j--)
        {
            scanf("%d",&m[maxr][j]);
            count++;
        }
        maxr--;
        if (count>=t) break;

        for(int i=maxr;i>=minr;i--)
        {
            scanf("%d",&m[i][minc]);
            count++;
        }
        minc++;
        if (count>=t) break;


    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}