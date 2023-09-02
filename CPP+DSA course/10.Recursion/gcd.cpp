// Given two numbers x and y. Find the gcd of x and y using recursion.
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a; 
    return gcd(b,a%b);   
}
int main(){
    int a,b;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}
