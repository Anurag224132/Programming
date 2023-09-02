#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << (a << 1) << endl;
    cout << (a >> 1) << endl;
    int b = 8;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    sizeof(a);
    return 0;
}