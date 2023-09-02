                        //for integer array

#include<stdio.h>
int main()
{
    int x[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n");
    for(i=5;i>=0;i--)
    {
        printf("%d\n",x[i]);
        

    }
    return 0;
}

                            //float array

// #include<stdio.h>
// int main()
// {
//     float x[5];
//     int i;
//     for(i=0;i<5;i++)
//     {
//         scanf("%f",&x[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         printf("%f\n",x[i]);
        

//     }
//     return 0;
// }

                        //
// #include<stdio.h>
// int main()
// {
//     char name[5]={'a','e','i'};
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("%c\n",name[3-2]);
//     }
// }