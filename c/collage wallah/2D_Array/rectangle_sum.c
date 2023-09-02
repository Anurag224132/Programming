//Given a matrix 'a' of dimension n*m and 2 coordinate (l1,r1) and (l2,r2).Return the sum of the rectangle from (l1,r1) to(l2,r2).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter the no.of columns: ");
    scanf("%d",&m);

    int a[n][m];
    printf("Enter the elements in the matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int l1,l2,r1,r2,sum=0;
    printf("enter l1:");
    scanf("%d",&l1);

    printf("enter r1:");
    scanf("%d",&r1);

    printf("enter l2:");
    scanf("%d",&l2);

    printf("enter r2:");
    scanf("%d",&r2);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<r2;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("sum of the rectangle is %d",sum);

}