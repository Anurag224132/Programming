#include<stdio.h>
int main()
{
    printf("________________________________\n");
    printf("|");
    for(int i=1;i<5;i++)
    {
        
        printf("val %d\t",i);
        printf("|");
        
    }
    //printf("|");
    printf("\n");
    printf("________________________________\n");
    for(int i=1;i<3;i++)
    {
        printf("|");
        for(int j=1;j<5;j++)
        {
            printf("  -\t");
            printf("|");
        }
        // printf("|");
        printf("\n");
        printf("________________________________\n");
    }
    //printf("________________________________\n");
    return 0;
}