#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
int n;
printf("\n Enter first string:");
gets(str1);
printf("\n Enter second string:");
gets(str2);
printf("\nEnter the number of characters you want to combine:");
scanf("%d",&n);
strncat(str1,str2,n);
printf("\n String after concatenation:%s",str1);
getch();
return 0;



}