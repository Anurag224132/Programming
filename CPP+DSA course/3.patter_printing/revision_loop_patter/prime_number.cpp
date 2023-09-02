// write the pattern like this
//       2
//      3 5
//     7 11 13
//    17 19 23 29
//   31 37 41 43 47
//  53 59 61 67 71 73

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want to print ";
    cin >> n;
    int num;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}