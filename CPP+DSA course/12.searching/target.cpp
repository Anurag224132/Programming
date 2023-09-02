// Given the rotated sorted array of integrs, which contains distinct elements and an
// integers target return the index of target if it is in the array. Otherwise return -1.
// input: array[3,4,5,1,2]  target=4
// output=1
#include <iostream>
using namespace std;
int tarr(int ar[],int l,int h,int target){
    int mid=l+(h-l)/2;
    if(l<=h){
        if(ar[mid]==target) return mid;
        if(ar[mid]>=target){
            tarr(ar,l,mid-1,target);
        }
        else{
            tarr(ar,mid+1,h,target);
        }
    }
    else return -1;

}
int main()
{
    int n,target;
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
    }
    cout << "]"<<"\n"<<"Enter the target element "<<endl;
    cin>>target;
    cout<<tarr(arr,0,n,target);
    return 0;

}