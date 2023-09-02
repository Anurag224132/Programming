// print the pattern like this
//       *
//       *
//     *****
//       *
//       *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the odd number for which you want to print this pattern ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Please enter the odd number to print this pattern " << endl;
    }
    else
    {
        for (int line = 1; line <= n / 2; line++)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << endl;
        for (int line = 1; line <= n / 2; line++)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
    return 0;
}