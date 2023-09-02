#include<stdio.h>
int main()
{
    // int arr[6];
    // printf("Enter the marks of the subjects: ");
    // for(int i=1;i<=6;i++)
    // {
    //     printf("subject %d ",i);
    //     scanf("%d",&arr[i]);
    // }
    // float sum=0;
    // for(int i=1;i<=6;i++)
    // {
    //     sum+=arr[i];
    //     printf("%d ",arr[i]);
    // }
    // double p=sum*100/240; 
    // printf("Your percentage is: %f",p);
    int sub1,sub2,sub3,sub4,sub5,sub6;
    printf("subject 1 ");
    scanf("%d",&sub1);

    printf("subject 2 ");
    scanf("%d",&sub2);

    printf("subject 3 ");
    scanf("%d",&sub3);

    printf("subject 4 ");
    scanf("%d",&sub4);

    printf("subject 5 ");
    scanf("%d",&sub5);

    printf("subject 6 ");
    scanf("%d",&sub6);

    float sum=sub1+sub2+sub3+sub4+sub5+sub6;
    double p=sum*100/240;
    printf("Your percentage is %f",p);
}