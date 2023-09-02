// #include<stdio.h>
// void greet()
// {
//     printf("how are you\n");
//     return;
    
// }
// int main()
// {
//     greet();
//     return 0;
// } 


#include<stdio.h>
int add(int a,int b)
{   return a+b;

}
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int sum= add(a,b);
    printf("%d",sum);
    return 0;
}