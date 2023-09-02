//#include<stdio.h>
//int myfun(int,int);//prototype or declare fun may take arg and retyrn some 
//main()
//{
//	int x,y,z;
//	printf("enter the values");
//	scanf("%d%d",&x,&y);
//	z=myfun(x,y);//fun call
//	printf("%d",z);
//}
//myfun(int aa , int bb)//fun def.aa=x,bb=y
//{
//	return (aa+bb);
//}



#include<stdio.h>
myfun(int aa,int bb)
{
	return( aa+bb);
	
}
main()
{
	int x,y,z;
	printf("enter the values");
	scanf("%d%d",&x,&y);
	z=myfun(x,y);//fun call
	printf("%d",z);
}
