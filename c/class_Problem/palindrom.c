#include<stdio.h>
int main()
{
	int x;
	printf("Enter a 3 digit number for palindrom checking: ");
	scanf("%d",&x);
	if(x/100==x%10)
	{
		printf("it is a palindrom");
	}
	else
	{
		printf("it is not a palindrom");
	}
}
