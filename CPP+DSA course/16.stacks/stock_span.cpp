// given a series of N daily quotes for a stock, we need to calculate the spane of the sock's price for all N days. The span of the stock's price in one day is the  max number of consecutive days(starting from that day and going backward) for which the stock price was less than or equal to the price of that day.
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
vector<int> pge(vector<int> &arr){
    int n=arr.size();
    //reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i]> arr[st.top()]){
            output[st.top()]=n-i-1;
            st.pop();
        }
        st.push(i);
    }
    // reverse(output.begin(),output.end());
    // reverse(arr.begin(),arr.end());
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res=pge(v);
    for(int i=0;i<res.size();i++){
        cout<<(i-res[i]) <<" ";
    }
    return 0;
}