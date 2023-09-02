//Given a matrix having 0-1 only, find the row with the maximum number of 1's

#include<stdio.h>
int main()
{
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    int smax=0;
    int idx=-1;
    for(int i=0;i<3;i++)
    {
        int count=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(smax<count)
        {
            smax=count;
            idx=i;
        }
    }
    printf("maximum count is %d and found in %d",smax,idx);
}