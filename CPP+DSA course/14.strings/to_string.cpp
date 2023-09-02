// to convert number value to string we use this function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int num=432;
    string str=to_string(num);
    str+="1";
    cout<<str<<endl;
    return 0;
}