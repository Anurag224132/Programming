#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array) / sizeof(array[0]);
    for (int idx = 0; idx < size; idx++)
    {
        cout << array[idx] << endl;
    }

    // for each loop
    for (int ele : array)
    {
        cout << ele << endl;
    }

    int i = 0;
    while (i < size)
    {
        cout << array[i] << endl;
        i++;
    }
    return 0;
}