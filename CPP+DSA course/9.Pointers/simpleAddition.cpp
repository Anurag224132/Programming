#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int *ptrx=&x;
    int *ptry=&y;

    int result;
    int *ptrs=&result;
    *ptrs=*ptrx+*ptry;
    cout<<"add " <<result;

}