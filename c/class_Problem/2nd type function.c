//#include<stdio.h>
//#include<stdio.h>
//float myfun(float x,float y)
//{
//	return(x+y);
//	
//}
//main()
//{
//	float x,y,z;
//	printf("enter the values");
//	scanf("%f%f",&x,&y);
//	z=myfun(x,y);//fun call
//	printf("%f",z);
//}



//2nd type program having no argument but it have return type 
#include<stdio.h>
float myfun()
{
	float a,b;
	printf("enter the values");
	scanf("%f%f",&a,&b);
	return(a+b);
}
main()
{
	float z;
	//printf("enter the values");
	//scanf("%f%f",&x,&y);
	z=myfun();//fun call
	printf("%f",z);
}
