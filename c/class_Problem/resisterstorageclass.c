#include<stdio.h>
int main()
{
    register int x=77;
    register int y=55;
    printf("%d %d\n",x,y);

    {
        register int x=10;
        register int y=33;
        printf("%d %d\n",x,y);
        {
            register int x=100;
            printf("%d\n",x);
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}