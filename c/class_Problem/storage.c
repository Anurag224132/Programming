#include<stdio.h>
int main()
{
    int x=77;
    auto int y=55;
    printf("%d %d\n",x,y);

    {
        int x=10;
        int y=33;
        printf("%d %d\n",x,y);
        {
            int x=100;
            printf("%d\n",x);
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}