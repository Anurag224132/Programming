// Given a number n. Print if it is an armstrong number or not.
#include<iostream>
using namespace std;
int pow(int p,int q){
    if(q==0) return 1;
    if(q%2==0){
        int result=pow(p,q/2);
        return result*result;
    }else{
        int result =pow(p,(q-1)/2);
        return p*result*result;
    }
}
int ams(int n,int d){
    if(n==0) return 0;
    return pow(n%10,d)+ams(n/10,d);
}


int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int d=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        d++;
    }
    int result=ams(n,d);
    if(result==n){
        cout<<"Yes , it is amstrong number.";
    }
    else{
        cout<<"No , it is not a amstrong number.";
    }
    return 0;
}