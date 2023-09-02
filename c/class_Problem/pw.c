
#include<stdio.h>
float si(float p,float n,float r){
	return(p*n*r/100);
}

main()
{
	float p,n,r;
	
	printf("enter p:");
	scanf("%f\n",&p);
	
	printf("enter n:");
	scanf("%f\n",&n);
	
	printf("enter r:");
	scanf("%f\n",&r);
	
	float s=si(p,n,r);
	printf("%f\n",s);
}
