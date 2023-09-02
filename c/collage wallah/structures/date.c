//create a structre date that contains three members namely date,month and year. create 2 structure variables with different dates and now compare the two . If the dates are equal then display message as "Equal" otherwise "Uequal"
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    }date;
    date a,b;

    a.day=5;
    a.month=12;
    a.year=1999;

    b.day=19;
    b.month=1;
    b.year=2023;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false; 
    if (flag=false) 
    {printf("date are different");}
    else 
    {printf("dates are same");}
    return 0;
}