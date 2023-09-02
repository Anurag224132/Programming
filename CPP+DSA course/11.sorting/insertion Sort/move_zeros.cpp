// Given an integer array arr, move all 0s to the end of it while maintaining the relative order of the non-zero elemnets.
// note that you must do this in-place without making a copy of the array.
// input:  0 5 0 3 42
// output: 5 3 42 0 0
#include<iostream>
#include<vector>
using namespace std;
void insertion(vector <int> &v){
    int n=v.size();
    






    
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
    insertion(v);
    cout << "Your array after sorting [";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}