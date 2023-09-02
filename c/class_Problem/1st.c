// //write a program to add two number
// #include<stdio.h>
// int main(){
// 	int side;
// 	printf("Enetr the side of square : ");
// 	scanf("%d",&side);
// 	printf("Area of the given square is %d",side*side);
// 	return 0;
// }


    // #include  <stdio.h>
    // int main()
    // {
    //    signed char chr;
    //    chr = 128;
    //    printf("%d\n", chr);
    //    return 0;
    // }

    //  #include <stdio.h>
    // int main()
    // {int i;
    //     for (i=1;i<=10;i++)
    //     {
    //         printf("%d-Hello\n",i);
    //     }
    //     return 0;
    // }
// #include<stdio.h>
// int main()
// {
    
//         for(int i=1;i<=5;i++)
//         {
//             for(int j=1;j<=i;j++)
//             {
//                  printf("* ");
//                   printf("\n");
//             }
           
//         }
    
// return 0;
// }

#include <stdio.h>                                     
void f1 (int a, int b)                                        
{                                                                     
  int c;                                                             
  c=a; a=b; b=c;
}
void f2 (int *a, int *b)
{
  int c;
  c=*a; *a=*b;*b=c;
}
int main()
{
  int a=4, b=5, c=6; 
  f1(a, b);
  f2(&b, &c);
  printf ("%d", c-a-b); 
  return 0;
}











