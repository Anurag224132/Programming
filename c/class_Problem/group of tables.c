#include<stdio.h>
int main()
{
	int table,i,j;
	printf("Enter the number upto which table you have to find:");
	scanf("%d",&table);
	for(i=2;i<=table;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
