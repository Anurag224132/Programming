//wap to climb stair by one,two,or three stairs at a time.......
#include<stdio.h>
int stair(int n)
{
    if(n==1 ) return 1;
    if (n==2) return 2;
    if (n==3) return 4;
    int totalways= stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;

}
int main()
{
    int n;
    printf("Enter the number of stairs:");
    scanf("%d",&n);
    int ways=stair(n);
    printf("number of ways to climb %d stairs is %d",n,ways);
    return 0;
}