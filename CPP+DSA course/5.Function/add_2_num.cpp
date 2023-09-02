#include <iostream>
using namespace std;
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int x, y;
    cout << "Enter the value of x ";
    cin >> x;
    cout << "Enter the value of y ";
    cin >> y;
    cout << "sum of theses two number " << x << " and " << y << " is " << add(x, y);
}