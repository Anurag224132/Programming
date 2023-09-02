#include<stdio.h>
int main(){
	int x,i,count=0;
	printf("enetr a number:");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if (x%i==0)
		{
			count++;
		}
	}
	if(count>0)
		printf("non prime");
	else
		printf("prime");
}
