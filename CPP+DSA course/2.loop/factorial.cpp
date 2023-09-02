#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 0;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            fact = 1;
        }
        else
        {
            fact = fact * i;
        }
    }
    cout << fact;
    return 0;
}