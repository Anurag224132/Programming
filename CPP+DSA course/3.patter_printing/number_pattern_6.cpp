// print this pattern
//      1
//     2 2
//    3   3
//   4444444
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
    }
}