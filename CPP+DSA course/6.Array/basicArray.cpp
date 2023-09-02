#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, 3, 4, 5, 6, 7, 8};
    cout << sizeof(array) << endl;
    cout << "length of array is " << sizeof(array) / sizeof(array[0]) << endl;

    return 0;
}