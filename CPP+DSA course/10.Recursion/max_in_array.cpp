// print the max value of the array [3,10,3,2,5]
#include<iostream>
using namespace std;

int maxx(int *a,int idx,int n){
    if(idx==n-1) return a[idx];
    return max(a[idx],maxx(a,idx+1,n));
}
int main(){
    int x=5;
    int arr[x]={3,10,3,2,5};
    //int result=maxx(arr,0,x);
    cout<<maxx(arr,0,x);
    return 0;
}