// Given an array of marks of students,if the mark of any student is less than 35 print its roll number.[roll number here refers to the index of the array.]


#include<stdio.h>
int main()
{
    printf("Enter the number of the students: ");
    int n;
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of the students: \n");
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        printf("Enter the marks of student %d\n",a);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]<35)
        {
            printf("the roll number of the student is %d\n",i);
        }
    }
}