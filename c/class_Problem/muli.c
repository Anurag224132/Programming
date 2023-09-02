#include<stdio.h>
    #include<string.h>
    int main(){


        //strcpy function
        char ori[20],dup[20];
        char*z;
        printf("\n enter your name:");
        gets(dup);
                printf("\nEnter your new name:");
        gets(ori);
        z=strcpy(dup,ori);
        printf("Orignal String is :%s",ori);
        printf("\nDuplicate String is :%s",dup);
        printf("\n value of z is : %s",z);
        getch();
        return 0;
    }