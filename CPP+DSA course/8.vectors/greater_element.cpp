// Count the number of element strictly greater than value x.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout << "Enter the size of element ";
    cin >> n;
    cout << "Enter the element in the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    int x;
    cout << "Enter the element which you want to count ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x < v[i])
        {
            count++;
            cout << v[i] << " ";
        }
        else
            continue;
    }
    cout << endl;
    cout << "Total number greater than " << x << " is " << count;
}