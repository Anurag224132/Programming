// Find the square root of the given non negative value x. Round it off to the nearest floor integer value.
// input:-    4
// output:-   2
#include<iostream>
using namespace std;
int square(int arr[],int l,int h,int data){
    int ans=-1;
    int mid=l+(h-l)/2;
    if(l<h){
        if(arr[mid]<=data*data){
        ans=mid;
        l=mid+1;
    }
    if(arr[mid]>data){
        square(arr,l,mid-1,data);
    }
    else{
        square(arr,mid+1,h,data);
    }
    }
    
    return ans;
        
}
int main(){
  int n;
  cout<<"Enter the size of the array ";
  cin>>n;
  int element;
  cout<<"Enter the element of which you want to find the square root ";
  cin>>element;
  int arr[n];
  cout<<"Enter the element in the array "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Your given array is ["<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<"]";

  cout<<square(arr,0,n-1,element);
}