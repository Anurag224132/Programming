// Find the Number of elements in an array which are greter than 25
#include<iostream>
using namespace std;
int main(){
    int n,m=25;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your given array is [";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Number greater than 25 is [";
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"]";
    return 0;
}