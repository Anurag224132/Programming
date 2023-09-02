#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    int element, idx;
    bool flag = false;
    cout << "Enter the element in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element which you want to search in the given array ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            flag = true;
            idx = i;
            break;
        }
        else
            continue;
    }
    if (flag == true)
    {
        cout << "Given element is found in the array at the index " << idx;
    }
    else
    {
        cout << "Given element is not found in the array and as per the question it will return -1";
    }
    return 0;
}