//Given two strings s and t, return true if t is an anagram of s, and false otherwise;
// constraints: string s and t will only contain lowercase alphabetical charchers.
// input:  s="anagram", t="nagaram"
// output yes
// input  s="bank",  t ="atm"
//output  no
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s1, string s2){
    // create freq array
    vector<int> freq(26,0);

    //if lengths are different for s1 and s2 then return false.
    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;  // for s1, we are incrementing freq of char
        freq[s2[i]-'a']--;  // for s2, we are decrementing freq of char
    }

    // checking if freq of every character is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}


int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(isAnagram(str1,str2)){
        cout<<"Strings are anagram "<<endl;
    }
    else{
        cout<<"Strings are not anagrams"<<endl;
    }
  
    return 0;
} 