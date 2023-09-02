

                    //LINEAR SEARCH


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int k;
    printf("\nEnter the number which you want to search in the array: ");
    scanf("%d",&k);
    bool flag=false;
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=true;
            idx=i;
        }
    }
    if(flag==false)
    {
        printf("given number %d is not found in this array",k);
    }
    else 
    {
        printf("given number %d found in this array at the %dth position",k,idx);
    }
    return 0;
}