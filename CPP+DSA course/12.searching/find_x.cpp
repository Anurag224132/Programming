// Find the first occurrence of a given element x, given that the given array is sorted. If no occurrence of x is found then return -1.
// input: arr[2,5,5,5,6,6,8,9,9,9]
// x=5.
// output:- 1
#include <iostream>
using namespace std;

void binary(int ar[], int l, int h, int x)
{
    int mid = l + (h - l) / 2;
    int ans = -1;

    if (l <= h)
    {
        if (ar[mid] == x)
        {
            cout << mid;
            return;
        }
        if (ar[mid] > x)
        {
            binary(ar, l, mid - 1, x);
        }
        else if (ar[mid] < x)
        {
            binary(ar, mid + 1, h, x);
        }
    }
    else{
    cout<<ans;
    return;
}

}
int main()
{
    int arr[10] = {2, 5, 5, 6, 6, 8, 9, 10, 9};
    int x = 9;
    binary(arr, 0, 9, x);
}