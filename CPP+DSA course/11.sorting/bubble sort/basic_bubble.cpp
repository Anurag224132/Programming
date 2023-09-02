#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &vi, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (vi[j] > vi[j + 1])
            {
                // int temp;
                 // temp=vi[j];
                // vi[j]=vi[j+1];
                // vi[j+1]=temp;
                flag = true;
                swap(vi[j], vi[j + 1]); // 2nd method using in built fuction for swapping but only in vector
            }
        }
        if (!flag) break;
    }

    cout << "Your array after sorting [";
    for (int i = 0; i < n; i++)
    {
        cout << vi[i] << " ";
    }
    cout << "]" << endl;
}
int main()
{
    int n;
    cout << "Enter the size ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Your given array is [";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    bubbleSort(v, n);
    return 0;
}