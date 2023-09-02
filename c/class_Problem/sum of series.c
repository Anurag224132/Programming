#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enetr the number: ");
	scanf("%d",&n);
	while(n<=10)
	{
		sum=sum+n;
		n++;
	}
	printf("%d",sum);
}
