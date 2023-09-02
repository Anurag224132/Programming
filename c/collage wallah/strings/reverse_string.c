#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    puts("The size of str is :");
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("%d",size);
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse of the string is:");
    puts(str);
    return 0;
}

