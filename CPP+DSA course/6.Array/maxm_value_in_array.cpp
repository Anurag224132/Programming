#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the elements in array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        int temp;
        if (max < arr[i + 1])
        {
            max = arr[i + 1];
        }
        else
            continue;
    }

    cout << "Maximum element of the array is " << max;
    return 0;
}