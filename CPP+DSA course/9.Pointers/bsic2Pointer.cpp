#include<iostream>
using namespace std;
int main(){
    int *ptr;
    cout<<ptr<<endl;

    int marks=90;
    ptr=&marks;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;//Here we use dereference operator i.e '*'.
    //Dereference operator gives the value sotred at the given address. 

    return 0;
}