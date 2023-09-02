// count the number of digits for a given number n.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter the value of num ";
    cin >> num;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    cout << count;
    return 0;
}