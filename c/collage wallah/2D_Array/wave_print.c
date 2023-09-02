// 1 2 3 
// 4 5 6 
// 7 8 9
// print;-
//        1 2 3  
//        6 5 4  
//        7 8 9 

//logic-even row print from start and odd row start form last
#include<stdio.h>
int main()
{
    printf("Enter the rows of M:");
    int r;
    scanf("%d",&r);
    printf("Enter the columns of M:");
    int c;
    scanf("%d",&c);
    int m1[r][c];
    printf("Enter the element in M:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\n\nmatrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    //wave printing
    printf("\n\nmatrix\n");
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");

        }
        else
        {
         for(int j=c-1;j>=0;j--)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");   
        }
    }



    
    return 0;
}