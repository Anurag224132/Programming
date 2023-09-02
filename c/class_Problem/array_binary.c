#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("enter array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int beg=0, last=9;
    int mid,loc=-1;
    int key;
    printf("enter the key to search ");
    scanf("%d",&key);
    
    while(beg<=last)
    {
    mid=(beg+last)/2;
        if(a[mid]==key)
        {
            loc=mid;
            break;
        }
        else if(a[mid]<key)
        {
            beg=mid+1;

        }
        else if(a[mid]>key)
        {
            last=mid-1;

        }

    }
    if(loc==-1)
    {
        printf("data does not exist");
    }
    else
    printf("data exist at %d position",loc);
}