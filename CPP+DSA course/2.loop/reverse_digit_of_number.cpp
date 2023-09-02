#include <iostream>
using namespace std;
int main()
{
    int num;
    int n = 0;
    cout << "Enter the number ";
    cin >> num;
    while (num > 0)
    {
        int m = num % 10;
        n = (n * 10) + m;
        num /= 10;
    }
    cout << n;
    return 0;
}