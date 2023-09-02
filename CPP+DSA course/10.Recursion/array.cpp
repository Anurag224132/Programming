// Given an array , print all the elements of the array recursevely.
#include<iostream>
using namespace std;

void f(int *arr,int idx,int n){
    if(idx==n) return;

    cout<<arr[idx]<<endl;
    f(arr,idx+1,n);
}
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Your given array is [ ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"]\n";

    f(a,0,n);
    return 0;
}