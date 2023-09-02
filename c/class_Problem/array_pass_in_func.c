// #include<stdio.h>
// int main()
// {
//     return 0;
// }





            //passing array to fun using call by vlaue

#include<stdio.h>
void fun(float b1,float b2,float b3,float b4)
{
    b1=b1+2;
    b2=b2+2;
    b3=b3+2;
    b4=b4+2;
    printf("inside fun values updated as\n");
    printf("%f\t%f\t%f\t%f\n\n",b1,b2,b3,b4);


}
int main()
{
    float a[4]={1.2,4,5.60};
    fun(a[0],a[1],a[2],a[3]);
    printf("values inside main not updated\n");
    for (int i=0;i<4;i++)
    {
        printf("%f\t",a[i]);
    }

    return 0;
}