#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    int ans = n * fact(n - 1);
    return ans;
}

int main()
{
    int a;
    cout << "Enter the value upto which you want to calculate factorial ";
    cin >> a;
    int r = fact(a);
    cout << r;
    return 0;
}