#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
inline int power(int base, int exponent) {
    return pow(base, exponent);
}
int main(){
    int num,number,r,n=0;
    cin>>num;
    int result=0;
    number=num;
    while(number!=0){
        number/=10;
        n++;
    }
    number=num;
    while(number!=0){
        r=number%10;
        result+=power(r,n);
        number/=10;
    }
    cout<<result;

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}