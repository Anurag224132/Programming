// Find the second largest elemnet in the given Array.
                    // By Using sorting method
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of the array ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the element in the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Your given array is [ ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl;

//     int s = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int temp;
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//             else
//                 continue;
//         }
//     }

//     cout << "Array after sorting is [ ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl
//          << "Second largest element in the given array is " << arr[n - 2];
//     return 0;
// }

            // By Using function
#include <iostream>
using namespace std;

int largest(int arry[],int s){
    int max=INT16_MIN;
    int idx=-1;
    for(int i=0;i<s;i++){
        if(arry[i]>max){
            max=arry[i];
            idx=i;
        }
    }
    return idx;

}
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your given array is [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    int lidx=largest(arr,n);
    int largestelement=arr[lidx];
    for(int i=0;i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    int sidx=largest(arr,n);
    cout<<"Second largest element is "<<arr[sidx]<<endl;
}