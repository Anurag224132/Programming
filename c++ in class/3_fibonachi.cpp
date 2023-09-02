#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number upto which you want to find the fibonachi series ";
    cin >> n;
    int n1 = 0, n2 = 1, n3;
    if (n == 0)
    {
        cout << n;
    }
    else if (n == 1)
    {
        cout << n1 << " " << n2 << " ";
    }
    else
    {
        cout << n1 << " " << n2 << " ";
    }
    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        int temp = n2;
        n2 = n3;
        n1 = temp;
    }
}