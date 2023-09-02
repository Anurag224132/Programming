//Given an integers array 'a',return the prefix sum/running sum in the same array without 
// creating a new array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array without operation is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int sum=0;
    cout << "]" << endl;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=sum;
    }
    cout << "Array after the given operation is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}