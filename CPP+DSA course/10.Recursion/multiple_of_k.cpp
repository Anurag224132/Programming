// Given a number num and a value of k. Print k multiples of num.
#include<iostream>
using namespace std;
void table(int a,int b){
    if(b<1) return ;
    table(a,b-1);
    cout<<a*b<<" ";
}
int main(){
    int num,k;
    cout<<"Enter the value of num ";
    cin>>num;
    cout<<"Enter the value of k ";
    cin>>k;
    table(num,k);
    return 0;
}