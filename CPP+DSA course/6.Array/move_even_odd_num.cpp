// Given an array of integers 'a',move all the even integers at the beginning of the
// array followed by all the odd integers. The relative order of odd or even integers
// does not matter. Return any array that satisfies the condition.
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
    cout << "]" << endl;
    int a[n];
    int j = n - 1, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            a[k] = arr[i];
            k++;
        }
        if (arr[i] % 2 != 0)
        {
            a[j] = arr[i];
            j--;
        }
    }
    cout << "Your given array after operation is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}