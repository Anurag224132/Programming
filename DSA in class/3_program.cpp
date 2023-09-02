//Find out the sum of all the two digit number only in an array 
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
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

    for(int i=0;i<n;i++){
        if(arr[i]>9&& arr[i]<100){
            sum+=arr[i];
        }
    }
    cout<<"sum of two digit number present in this array is "<<sum;
    return 0;
}