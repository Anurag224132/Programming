#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the 10 value in array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "sum of the element in array is " << sum << endl;
    return 0;
}