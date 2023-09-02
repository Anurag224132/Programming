// Find the total number of pairs in the Array whose sum is equal to the given value x.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array " << endl;
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

    int tsum, count = 0;
    cout << "Enter the targent sum ";
    cin >> tsum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == tsum)
            {
                count++;
            }
            else
                continue;
        }
    }
    cout << "Number of pairs equal to the given element is " << count;
}