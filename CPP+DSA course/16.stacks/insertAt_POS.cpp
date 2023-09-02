#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void insertAt(stack<int> &st,int x,int idx){
    stack<int> temp;
    int n=st.size();
    int count=0;
    while(count<n-idx){
        count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAt(st,100,2);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}