#include<stdio.h>
int main()
{
	int x,i,count=0;
	printf("enter the number: ");
	scanf("%d",&x);
	for(i=1;i<20;i++)
	{
		if(i%2==0)
		{
			count++;
		}
		else
		{
			printf("%d * %d =%d\n",x,i,x*i);
		}
	}
}
