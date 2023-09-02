#include<stdio.h>
int x=10;//static by default as global
void fun()
{
    printf("%d\n",--x);
}
void fun1()
{
    x=x-2;
    printf("%d",x);
}
int main()
{
    fun();
    fun();
    fun1();

}