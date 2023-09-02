#include<stdio.h>
void binary(int x[])
{
    int beg=0;
    int last=n-1;
    int loc=-1, key, beg,last,mid,i;

   while(beg<=last)//Loop will run until unless only one element is not remaining
   {
    mid = (beg + last) / 2; // determine index of middle element
    if(a[mid]==key)
    {
      loc=mid; //save the location of element.
      break;
    }
else if(a[mid]>key) //Middle element is greater than key
    {
      last=mid-1;//If middle element is greater than key, we need to search left subarray
    }
    else if(a[mid]<key) //Middle element is less than key
    {
      beg=mid+1;//If middle element is less than key, we need to search right subarray
    } //end of if else
   } //end of while
   if(loc!=-1)
   {
     printf("element found at %d", loc+1);//Location is exact position, not index
   }
   else
   {
     printf("element not found");
   }


}
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
    binary(ar,n);
}