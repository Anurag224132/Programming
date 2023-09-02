//Count the number of triplets whose sum is equal to the given value x.

#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m,count=0;
    printf("Enter the number for which you want to check:");
    scanf("%d",&m);


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[i]+ar[j]+ar[k]==m)
                {
                    count=count+1; 
                printf("(%d,%d,%d)\n",ar[i],ar[j],ar[k]);
                }
            }
        }
    }
    printf("the total no.of pair for this sum is %d:",count);
    return 0;
}