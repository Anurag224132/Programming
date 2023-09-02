//Given a number n, Find the increasing sequence from 1 to n without using any loop.
#include<iostream>
using namespace std;

void seq(int n){
    if(n<1) return ;
    seq(n-1);
    cout<<n<<" ";
}
int main(){
    int a;
    cout<<"Enter the value of a ";
    cin>>a;
    seq(a); 
    return 0;
}