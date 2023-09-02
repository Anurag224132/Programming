// Find the difference between the sum of elemnts at even indices to the sum of elements at odd indices.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int sum = 0;
    cout << "Enter the element in the vector " << endl;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << "vector elements are [ ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    cout << "Sum of the elements present at the even idicies and minus of the element at the odd indices is ";
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            sum += v[i];
        }
        else
        {
            sum -= v[i];
        }
    }
    cout << sum << endl;
}