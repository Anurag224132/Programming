//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
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
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                //i++;
                //j=i+1;
                flag=true;
            }
        }
        if(flag==false)
        {
            printf("\n%d",arr[i]);
            break;
        }
    }
    return 0;
}