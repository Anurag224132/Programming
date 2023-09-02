				//factorial

#include<stdio.h>
int main(){
	int fact=1,x;
	printf("Enetr the number for which factorial can we calculated : ");
	scanf("%d",&x);
	while(x>=1){
		fact=fact*x;
		x=x-1;
		printf("%d\n",fact);
	}
	printf("%d",fact);
}
