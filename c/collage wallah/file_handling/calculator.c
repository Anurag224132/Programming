//write a program to create a calculator that performs basic arithmetic opertions(add, subtract,multiply, divide) using switch case and functions. The calculator should input two numbers and an operator from user.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    char ch;
    scanf("%c",&ch);
    int b;
    scanf("%d",&b);

                //by if else statements

    // if(ch=='+')
    //     printf("%d",a+b);
    // if(ch=='-')
    //     printf("%d",a-b);
    // if(ch=='*')
    //     printf("%d",a*b);        
    // if(ch=='/')
    //     printf("%f",(float)a/b);

    switch (ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
}