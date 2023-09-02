//write a program to rotate the matrix by 90 degree;
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    //int c;
    // printf("Enter the number of columns:");
    // scanf("%d",&c);
    int arr[n][n];
    printf("Enter the elemnts in this array:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // int temp;
    // temp=n;
    // r=n;
    // c=temp;
    printf("Transpose of a matrix is given below:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    
    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        while(j<k)
        {
            int temp =arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("Given matrix rotated by 90 degree:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}