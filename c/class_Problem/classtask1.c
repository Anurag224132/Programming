//sum of series i.e 2+3+4+5..................

#include<stdio.h>
int ser(int x)
{
    if (x>1 && x%2==0)//repeat step
    {
        return(x+ser(x-2));//agar ham + ko * se 
    }
    else//base or terminate
    {
        return 2;
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