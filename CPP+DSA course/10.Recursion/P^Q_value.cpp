// find the value P^Q using a recursive function.

// First method
// #include<iostream>
// using namespace std;

// int power(int p,int q){
//     if(q==0) return 1;
//     return power(p,q-1)*p;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the base number ";
//     cin>>a;
//     cout<<"Enter the number at power ";
//     cin>>b;
//      int result=power(a,b);
//     cout<<result;
//     return 0;
//}

// Second method
#include <iostream>
using namespace std;

int power(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = power(p, q / 2);
        return result * result;
    }
    else
    {
        int result = power(p, (q - 1) / 2);
        return p * result * result;
    }
}
int main()
{
    int a, b;
    cout << "Enter the base number ";
    cin >> a;
    cout << "Enter the number at power ";
    cin >> b;
    int result = power(a, b);
    cout << result;
    return 0;
}