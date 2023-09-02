//A record contains name of cricketer ,his age,number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structre to hold recods of 20 such cricketer and then write a program to read these records
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int no_of_matches;
        float average;
    }cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s",&arr[i].firstname);
        scanf("%s",&arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].no_of_matches);
        scanf("%f",&arr[i].average);

    }

    for(int i=0;i<3;i++)
    {
        printf("name : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age: %d\n",arr[i].age);
        printf("No of matches: %d\n",arr[i].no_of_matches);
        printf("Average: %f\n\n",arr[i].average);
        printf("\n");
    }
}