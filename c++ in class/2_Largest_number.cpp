#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the value of c ";
    cin>>c;
    cout<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
    if(a>b && a>c){
        cout<<"Largest number among a,b,c is "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"Largest number among a,b,c is "<<b<<endl;
    }
    else{
        cout<<"Largest number among a,b,c is "<<c<<endl;
    }
    return 0;
}