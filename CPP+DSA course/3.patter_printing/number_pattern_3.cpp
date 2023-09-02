// print patter like this
// 123456
// 1    6
// 1    6
// 123456
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows " << endl;
    cin >> n;
    cout << "Enter the number of column " << endl;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}