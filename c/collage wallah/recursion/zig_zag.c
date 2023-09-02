//print zig-zag
// input    output
// 1        111
// 2        211121112
// 3        32111211123211123
// 4        432111211123211121112343211121112321112111234

#include<stdio.h>
 void preInpost(int n)
 {
    if (n==0) return;
    printf("%d",n);
    preInpost(n-1);
    printf("%d",n);
    preInpost(n-1);
    printf("%d",n);
 }
 int main()
 {
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   preInpost(n);
   
   return 0;
 } 