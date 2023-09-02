//Find the total number of pairs in the Array whose sumn is equal to the given value x
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
            if(ar[i]+ar[j]==m)
            {
                count=count+1; 
                printf("(%d,%d)\n",ar[i],ar[j]);
            }
        }
    }
    printf("the total no.of pair for this sum is %d:",count);
    return 0;
}