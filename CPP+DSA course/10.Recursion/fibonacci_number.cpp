#include<iostream>
using namespace std;

int fibo(int a){
    if(a==0 || a==1) return a;
    
    int ans=fibo(a-1)+fibo(a-2);
    return ans;

}
int main(){
    int n;
    cout<<"Enter the for which you want to calculate the fibonacci number ";
    cin>>n;
    int r=fibo(n);
    cout<<r;
    return 0;

}