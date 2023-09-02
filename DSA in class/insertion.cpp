#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current_ele = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] > current_ele)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current_ele;
    }
    cout << "Your sorted array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin>>n;
    int arr[n];
    cout << "Enter elements is array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]"<<endl;
    insertion(arr,n);
}