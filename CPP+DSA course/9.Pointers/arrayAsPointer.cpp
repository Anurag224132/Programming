#include <iostream>
using namespace std;

void process(int *ar, int n)
{
    for (int i = 0; i < 3; i++)
    {
        cout << *(ar + i) << " ";
    }
    *(ar + 1) = 33;
    cout << endl;
}
int main()
{
    int arr[3] = {5, 1, 4};
    process(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}