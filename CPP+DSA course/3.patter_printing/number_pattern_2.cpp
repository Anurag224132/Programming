// print this pattern for n=4
// 123456
// 123456
// 123456
// 123456
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the value of n ";
    cin >> n;
    cout << "Enter the value of m ";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}