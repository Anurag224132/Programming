//print the number given by user is amstrong number or not i.e=153 (number only 3 digit)
//1^1+5^2+3^3=153
#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c,d,e;
	printf("Enter the 3 digit number to check the amstrong");
	scanf("%d",&x);
	if(x<=99||x>=1000)
	{
		printf("please enter 3 digit number: ");
	}
	else
	{
	a=x%10;
	b=x/100;
	c=x/10;
	d=c%10;
	e=pow(a,3)+pow(d,3)+pow(b,3);
		if(x==e)
		{
			printf("It is a armstrong");
		}
		else
		{
			printf("It is not a armstrong");
		}
	}

}
