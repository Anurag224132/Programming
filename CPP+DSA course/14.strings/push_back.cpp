#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Anura";
    char c='g';
    s.push_back(c);
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    return 0;
}