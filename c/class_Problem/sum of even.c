#include<stdio.h>
int main()
{
	int x;
	int sum=0;
	printf("enetr the number: ");
	scanf("%d",&x);
	if(x%2==0)
	{
		while(sum<50)
		{
		sum=x+2;
		x+=2;
		printf("%d\n",sum);
		}
	}
	else
	{
		x=x-1;
		while(sum<50)
		{
		sum=x+2;
		x+=2;
		printf("%d\n",sum);
		}
	}
	
}
