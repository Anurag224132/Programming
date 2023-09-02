//copy contents of one stack to another in same order.
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
stack<int> copystack(stack<int> &input){
    stack<int>temp;
    while(not input.empty()){
    // do the precess till the input stack dosen't become empty
    int curr=input.top();  //[],curr=1
    input.pop();
    temp.push(curr);
    }

    stack<int>result;
    while(not temp.empty()){
    int curr=temp.top(); 
    temp.pop();
    result.push(curr);
    }

    return result;

}


void f(stack<int> &st,stack<int> &result){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    f(st,result);
    result.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    //stack<int>res=copystack(st);

    stack<int> res;
    f(st,res);
    while(not res.empty()){
        int curr=res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}