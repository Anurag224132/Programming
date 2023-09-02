#include<iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cin>>p;
    // int i;
    // i=p-1;
    // while(i<n-1){
    //     arr[i]=arr[i+1];
    //     i++;
    // }
    for(int i=p-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"Updated array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}