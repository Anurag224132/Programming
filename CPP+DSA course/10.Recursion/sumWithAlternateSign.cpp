// Given a number n. Find the sum of natural numbers till n but with alternate signs.
#include<iostream>
using namespace std;
int s(int n){
    int sum=0;
    if(n<1) return 0;
    return s(n-1)+((n%2==0)?(-n):(n)); 
}
int main(){
    int a;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<s(a);
    return 0;
    
}