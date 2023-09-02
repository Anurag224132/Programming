// for n=4 print this pattern
// 1234
// 2341
// 3412
// 4123
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}