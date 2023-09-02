#include <iostream>
using namespace std;
int main()
{
    char vowels[5];

    // By for loop
    // cout<<"enter the elements ";
    // for(int idx=0;idx<5;idx++){
    //     cin>>vowels[idx];
    // }
    // cout<<"the elements are:";
    // for(int idx=0;idx<5;idx++){
    //     cout<<vowels[idx]<<" ";
    // }

    // By for each loop
    cout << "enter the elements ";
    for (char &element : vowels)
    {
        cin >> element;
    }

    for (int idx = 0; idx < 5; idx++)
    {
        cout << vowels[idx] << " ";
    }
    return 0;
}