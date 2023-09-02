// Given an integer , find out the sum of its digits of its digits using recursion.
#include<iostream>
using namespace std;
int s(int a){
    if(a<9 and a>0) return a;
    return s(a/10)+(a%10);

}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    //int sum=0;
    // while(n>0){
    //     sum+=n%10;
    //     n=n/10;
    // }
    int res=s(n);
    cout<<res;

}