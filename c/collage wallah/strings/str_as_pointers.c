#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="college wallah";
    char* ptr=str;
    printf("%p\n",&str[0]);
    printf("%p",str);
    int i=0;
    while(str[i]!='\0')
{
    printf("%c",str[i]);
    i++;
}
    return 0;
}