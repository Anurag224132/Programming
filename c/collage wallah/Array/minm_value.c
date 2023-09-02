// find the mimum value out of all the element in the given array

#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements in the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    printf("minimum element in the given array is %d", min);
    return 0;
}