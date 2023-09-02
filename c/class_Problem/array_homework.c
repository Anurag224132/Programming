//create an array of size 10 enter the data and then search a number wheter it exist or not if it exist then delete this data
#include <stdio.h>

int main() 
{
    int a[10];
    int i, f = 0;
    
    printf("Enter 10 numbers into the array:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
    }
    int num;
    printf("Enter the number you want to search for and delete: ");
    scanf("%d", &num);
    
    for (i = 0; i < 10; i++) 
    {
        if (a[i] == num)
        {
            f = 1;
            break;
        }
    }
    
    if (f) 
    {
        printf("%d found at index %d\n", num, i);
        for (int j = i; j < 9; j++) 
        {
            a[j] = a[j + 1];
        }
        //a[9] = 0;
        printf("%d deleted from array\n", num);
    } 
    else 
    {
        printf("%d not found in array\n", num);
    }
    
    printf("Array after deletion: ");
    
    for (i = 0; i < 9; i++) 
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    

    
    return 0;
}