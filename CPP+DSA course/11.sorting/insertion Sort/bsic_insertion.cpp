#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current_ele=v[i];

        int j=i-1;
        while (j>=0&& v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current_ele;
        
    }
}
int main(){
    int n;
    cout << "Enter the size ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }  
    cout << "Your given array is [";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;

    insertion(v);
    cout << "Your given array after sorting is [";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    return 0;

}