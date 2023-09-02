#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements present in the array: \n");
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        printf("Enter the element %d\n",a);
        scanf("%d",&arr[i]);
    }
    
   for (i=0;i<n-1;i++)
   {
	  for (j=0;j<n-i-1;j++)
	   {
         if (arr[j]>arr[j+1])
		 {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      } 
   } 
   printf( "\n ascending order" );
   for (i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
} 
