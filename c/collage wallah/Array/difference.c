//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n,a;
    int count=0;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int o=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)e=e+ar[i];
        else o=o+ar[i];
    }
    printf("difference between the sum of elements at even and odd idices is %d",e-o);
    return 0;
}