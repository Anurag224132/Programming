// Given a string str, sort the given string.
// Constraints: The string will contain only alphabetical charcacters from a-z
// input 1:"condingwallah"
// output 1: "aacdghillnow"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string countsort(string str){
    vector<int> freq(26,0);

    //storing frequency of every character in string
    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        freq[index]++;
    }

    //create our sorted string 
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';        }
    }

    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<countsort(str);
    return 0;
} 