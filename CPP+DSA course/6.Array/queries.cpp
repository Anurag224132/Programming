// Given an array of integers of size n. Answer q queries where you need to print the sum
// of values in a given range range of indices from l to r (both included).

// NOTE--The values of l and r in queries follow l-based indexing.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> v(n + 1, 0);
    cout << "Enter the size of the array ";
    cin >> n;
    cout << "Enter the elements of the array in the non-decreasing sorted order" << endl;
    for (int i = 1; i <= n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Your given array is [ ";
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int ans = 0;
        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }
    return 0;
}