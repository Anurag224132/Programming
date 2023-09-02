// Write a program to check whether a given number is palindrome or not.
//without converting into string
#include<iostream>
using namespace std;
bool f(int num,int *temp){
    if(num>=0 and num<=9){
    int last=(*temp)%10;
    (*temp)/=10;  
    return (num==last);
     }
    bool result=(f(num/10,temp)and (num%10)==((*temp)%10));
    (*temp)/=10;
    return result;


}
int main(){
    int n=1441;
    int t=n;
    int *tem=&t;
    cout<<f(n,tem);
    return 0;
}