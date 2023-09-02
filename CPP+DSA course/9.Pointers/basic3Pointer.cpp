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

    marks=70;
    // the bucket marks updated the value from 90 to 70.
    // but ptr is still pointing to same bucket 
    // now if we derefernce ptr, we will get 70.

    cout<<*ptr<<endl;


    *ptr=100;  // Update the value of marks using pointer i.e 100
    cout<<marks<<endl;
    cout<<*ptr<<endl;


    // we can also assign the pointer to the new variable 
    int value =*ptr;
    cout<<"value "<<value<<endl;
    return 0;
}