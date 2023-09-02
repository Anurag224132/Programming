#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    cout << sizeof(a) << endl;
    char b = 'k';
    cout << sizeof(a) << endl;
    bool flag;
    a == b ? flag = true : flag = false;
    cout << flag << endl;
    cout << (&a) << endl;
    return 0;
}