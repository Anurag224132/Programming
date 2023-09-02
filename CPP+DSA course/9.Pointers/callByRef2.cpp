#include<iostream>
using namespace std;

void calculateFirstLast(string s,char c,int *p,int *l){
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            *p=i;
            break;
        }
    }

    for(int i=s.size();i>0;i--){
        if(s[i]==c){
            *l=i;
            break;
        }
    }
}
int main(){
    string s="aaabac";
    char c='a';
    int first=-1;
    int last=-1;
    calculateFirstLast(s,c,&first,&last);
    cout<<first<<endl<<last; 
}
