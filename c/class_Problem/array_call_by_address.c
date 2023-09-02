

#include<stdio.h>
void fun(float *b1,int size)//b1=a
{
    int i;
    for(i=0;i<size;i++)
    {
        *(b1+i)=*(b1+i)+2;
        b1[i]=b1[i]+2;
    }
    printf("inside the function values are:\n");
    for(i=0;i<size;i++)
    {
        printf("%f\t",*(b1+i));
    }
    printf("\n");
    
}

int main()
{
    int i;
    float a[4]={1.2,4,5.60};
    fun(a,4);//calling of function a=base address=&a[0]
    printf("inside the function values are:\n");
    for(i=0;i<4;i++)
    {
        printf("%f\t",a[i]);
    }


    return 0;
}


//address of array

// #include<stdio.h>
// int main()
// {
//     char x[3]={};
//     printf("%d ",&x[0]);
//     // printf("%d ",x+0);
//     printf("%d ",(x+0));
//     printf("%d ",(0+x));
//     printf("%d ",&0[x]);

//     printf("%d ",&x[3]);
//     printf("%d ",(x+3));
//     printf("%d ",(3+x));
//     printf("%d ",&3[x]);
//     return 0;
// }