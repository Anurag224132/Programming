// You are using GCC
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int temp, ans = -1;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = n/2; j < n; j++)
        {
            if(arr[i] == arr[j]) {
                count++;
                temp=i;
            }
            
        }
        if (count >= n / 2)
            {
                ans = arr[temp];
            }
    }
    cout<<count<<endl;
    if (count > n / 2)
    {
        cout << "The majority candidate is ID " << ans;
    }
    else
    {
        cout << "No majority candidate found";
    }
    return 0;
}