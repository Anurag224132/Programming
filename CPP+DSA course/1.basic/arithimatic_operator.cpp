#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of num1 ";
    cin >> num1;
    cout << "Enter the value of num2 ";
    cin >> num2;
    cout << "Addition of num1 and num2 is " << num1 + num2 << endl;
    cout << "Subtraction of num1 and num2 is " << num1 - num2 << endl;
    cout << "Multiplication of num1 and num2 is " << num1 * num2 << endl;
    cout << "Division of num1 and num2 is " << num1 / num2 << endl;
    cout << "Modolue of num1 and num2 is " << num1 % num2 << endl;
    cout << "Increament of num1 is " << ++num1 << endl;
    cout << "Decreament of num1 is " << --num1 << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    return 0;
}