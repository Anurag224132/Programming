// a rotated sorted array is a sorted array on which rotation operation has been performed
// some number of times.  Given a rotated sorted arrray, find the index of the minimum
// element in the array . find 0-based indexing.
// it is guranteed that all the elemtns in the array are unique 

// input: array[3,4,5,1,2]
// output: 3

#include <iostream>
using namespace std;
int tarr(int ar[],int l,int h){
    int ans=INT8_MAX;
    int mid=l+(h-l)/2;
    if(l<=h){
        // if(ar[mid]<=ans) {
        //     ans=mid;
        // }
        if(ar[mid]<=ans){
            ans=mid;
            tarr(ar,l,mid-1);
        }
        else{
            tarr(ar,mid+1,h);
        }
    }
    return ans;

}
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
    }cout<<"]"<<endl;
    cout<<tarr(arr,0,n);
    return 0;



}