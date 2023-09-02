#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of a ";
    int a, b;
    cin >> a;
    cout << "\nEnter the value of b ";
    cin >> b;
    cout << "value of a before swapping " << a;
    cout << "\nvalue of b before swapping " << b;
    int d;
    d = b;
    b = a;
    a = d;
    cout << "\nvalue of a before swapping " << a;
    cout << "\nvalue of b before swapping " << b;
    return 0;
}