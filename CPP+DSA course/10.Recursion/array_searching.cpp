// Given an array of n integers and a target value x. Print whether x exists in the array or not.
#include <iostream>
using namespace std;
bool search(int *arr,int n,int i,int element){
    if(i==n) return false;
    return (arr[i]==element)||search(arr,n,i+1,element);
}
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array is [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    int element;
    cout <<endl<< "Enter the elements which you want to search in this array ";
    cin >> element;
    bool result=search(arr,n,0,element);
    if(result) cout<<"Yes";
    else cout<<"NO";
    return 0;
} 