#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=2.2;
    cout<< &x<<" "<<&y<<endl;


    //pointers are used to store the address.
    //Create a pointer that can store address of x;
    //As x is an interger variable , so we need a pointer that can store address of integer type.

    int *ptr=&x;
    cout<<ptr<<endl;
    float *ptrf=&y;
    cout<<ptrf<<endl;


    
    return 0;
}