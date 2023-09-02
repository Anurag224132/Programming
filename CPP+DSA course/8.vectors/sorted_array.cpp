// check if the given array is sorted or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array ";
    for (int i = 0; i < n; i++) // Array input
    {
        cin >> arr[i];
    }
    cout << "Given array is [ ";
    for (int i = 0; i < n; i++) // Array output
    {
        cout << arr[i] << " ";
    }
    cout << " ]" << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag = false;
            break;
        }
        else
            continue;
    }
    if (flag == true)
    {
        cout << "Given array is sorted";
    }
    else
    {
        cout << "Given array is not sorted";
    }
    return 0;
}