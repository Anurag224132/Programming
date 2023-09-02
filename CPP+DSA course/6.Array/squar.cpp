// Given an integer array 'a' sorted in non-decreasing order,return an array of the
// squares of each number sorted in non-decreasing order.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    cout << "Enter the elements of the array in the non-decreasing sorted order" << endl;
    int arr[n], a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"]"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i] * arr[i];
    }
    cout << "Square of the given array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<"]"<<endl;
    return 0;
}