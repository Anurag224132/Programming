// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
                break;
            }
            else
                continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
        else
            continue;
    }
    return 0;
}