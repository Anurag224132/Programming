// Find the sum of digits in a given number n.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the value of n ";
    cin >> n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    cout << sum;
    return 0;
}