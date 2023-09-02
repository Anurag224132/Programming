//find out the maximum element and minimum element in a 2D array 
// and the index of maxm element

// #include<stdio.h>
// void main()
// {
//     char name[]={"Lovely professional University"};
//     int i=0;
//     while(name[i]!='\0')
//     {
//         printf("%c",name[i]);
//         i++;

//     }
// }

#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of colums:");
    scanf("%d",&c);
    int max=0;
    int idx=-1;
    int idx1=-1;

    int m[r][c];
    printf("enter the elements in the matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(m[i][j]>max)
            {
                int temp;
                temp=m[i][j];
                m[i][j]=max;
                max=temp;
                idx=i;
                idx1=j;
            }
        }
    }
    printf("max element is %d at the index (%d,%d)",max,idx,idx1);
    return 0;

}