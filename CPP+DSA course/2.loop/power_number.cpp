// Given 2 numbers a and b. Find a rise to the power b.
#include <iostream>
using namespace std;
int main()
{
    int a, b, power = 1;
    cout << "Enter the value of a ";
    cin >> a;
    cout << "Enter the value of b ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    cout << "Result of " << a << " raise to the power " << b << " is " << power;
    return 0;
}