#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    int arr[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your  array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}