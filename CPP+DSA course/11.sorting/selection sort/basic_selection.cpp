#include <iostream>
#include <vector>
using namespace std;
void selection(vector<int> &vi)
{
    int n=vi.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vi[j]<vi[min_index])
            {
                min_index = j;
            }
            if (i!=min_index)
            {
                swap(vi[i], vi[min_index]);
            }
        }
    }
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


    
    selection(v);


    cout << "Your given array after sorting is [";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}