#include<stdio.h>
void add(int a,int b,int c)
{
	printf("%d\n",a+b+c);
}
void sub(int x,int y)
{
	printf("%d\n",x-y);
}
int mul(int a,int b,int c)
{
	return(a*b*c);
}
int div(int al,int bl)
{
	return(al/bl);
}

main()
{
	int x=20,y=30;
	int p=div(x,y);
	printf("%d\n",p);
	
	int pl=mul(5,6,7);
	printf("%d\n",pl);
	
	sub(10,5);
	
	add(2,5,3);
}

