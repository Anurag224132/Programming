// By while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     int sum=0;
//     cout<<"Enter the number up to which you want find the sum "<<endl;
//     cin>>n;
//     while(i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// By For loop

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "Enter the number up to which you want find the sum " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}