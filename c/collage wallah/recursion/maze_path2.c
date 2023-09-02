#include<stdio.h>
int maze2(int n,int m)
{
    int rightways=0;
    int downways=0;
    if (n==1 && m==1) return 1;
    if(n==1)//cannot go down
    {
        rightways+=maze2(n,m-1);
    }
    if(m==1)//cannot go right
    {
        downways+=maze2(n-1,m);
    }
    if(n>1 && m>1)
    {
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);
    }
    int totalWays=rightways + downways;
    return totalWays;
}
int main()
{
    int n;
    printf("Enter number of rows of the maze: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of colums of the maze: ");
    scanf("%d",&m);
    int no0fways=maze2(n,m);
    printf("%d",no0fways);
    return 0;
}