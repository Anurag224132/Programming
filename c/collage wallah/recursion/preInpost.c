 #include<stdio.h>
 void preInpost(int n)
 {
    if (n==0) return;
    printf("pre %d \n",n);
    preInpost(n-1);
    printf("In %d \n",n);
    preInpost(n-1);
    printf("post %d \n",n);
 }
 int main()
 {
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   preInpost(n);
   
   return 0;
 } 