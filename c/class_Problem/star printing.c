#include<stdio.h>
int main()
{
	int num,i,j,x,n;
	printf("Enetr the number of rows:");
	scanf("%d",&num);
	for(i=65;i<=num;i++)
	{
		for(j=65;j<=i;j++)
		printf("%c",j);
		printf("\n");
	}
}
