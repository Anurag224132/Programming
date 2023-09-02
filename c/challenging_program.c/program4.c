#include<stdio.h>
int main()
{
   char name[6]={'N','A','M','E'};
   char n[6]={'V','I','S','H','A','L'};
   for(int i=0;i<=5;i++)
   {
    
        printf("%c  %c\t",name[i],name[i+1]);
        printf("%c  %c",n[i],n[i+1]);
        printf("\n");
        i++;
   }
   return 0;
}