#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the row ";
    cin>>r;
    cout<<"Enter the column ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Your given array is"<<endl;
    for(int i=0;i<r;i++){
        cout<<"|";
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"|";  
        cout<<endl;
    }
}