#include<stdio.h>
int ser(int x)
{
    if (x>1)//repeat step
    {
        return(x+ser(x-1));//agar ham + ko * se 
    }
    else//base or terminate
    {
        return 1;
    }

}

int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int res;
    res=ser(n);
    printf("the result is %d",res);


    
    return 0;
}