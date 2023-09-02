#include<stdio.h>
int main()
{
	int n,sum=0,no;
	printf("enter the no: ");
	scanf("%d",&no);
	while(no!=0)
	{
		n=no%10;
		sum=sum*10+n;
		no=no/10;
		
	}
	printf("reverse of digit=%d",sum);
}


