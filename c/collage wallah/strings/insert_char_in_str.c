//write a function to insert a new character in a string at a given position.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="College";
    printf("%s\n",str);
    for(int i=6;i>=2;i--)
    {
        str[i+1]=str[i];
    }
    str[2]='k';
    printf("%s\n",str);
    return 0;
}