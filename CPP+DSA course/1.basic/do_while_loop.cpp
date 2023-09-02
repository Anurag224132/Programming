// Print the sum of the stream of N intergers in the input using do-while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << sum << endl;
    return 0;
}