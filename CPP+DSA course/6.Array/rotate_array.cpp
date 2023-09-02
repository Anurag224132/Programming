// Rotate the given array 'a' by k steps,where k is non-negative.
// NOTE:- k can be greater than n as well where n is the size of the array'a'.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n], array[n], m;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Array before rotation is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl
         << "Enter the value of m to rotate the array ";
    cin >> m;
    int k = m % n;
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        array[j++] = arr[i];
    }
    for (int i = 0; i < n - k; i++)
    {
        array[j++] = arr[i];
    }
    cout << endl
         << "Array after rotation is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]";
    return 0;
}