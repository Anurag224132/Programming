// given an array of strings . write a program to find the longest common prefix string amongst an array of strings.
// input: arr=["flower","flight","flask"]
// output: "fl"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestcommon(vector<string>&str){
    // keeping first string as common and comparing it with all other strins
    string s=str[0];
    int ansl=s.size();
    for(int i=0;i<str.size();i++){
        int j=0;
        while(j<s.size() && j<str[i].size() && s[j]==str[i][j]){
            j++;
        }ansl=min(ansl,j);
    }
    string ans=s.substr(0,ansl);
    return ans; 
}
int main(){
    int n;
    cout<<"Enter no of strings: ";
    cin>>n;

    cout<<"Enter stings"<<endl;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"Longest common prefix:"<<longestcommon(str)<<endl;
}