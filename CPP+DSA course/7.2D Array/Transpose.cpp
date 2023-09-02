// Write a program to display transpose of matrix entered by the user.
#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter the row of a matrix ";
    cin>>r1;
    cout<<"Enter the column of a matrix ";
    cin>>c1;

    int m[r1][c1];
    cout<<"Enter the element in the matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m[i][j];
        }
    }

    cout << "Matrix --" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << m[i][j]<<" ";
        }
        cout<<endl;
    }


    int m1[c1][r1];
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            m1[i][j]=m[j][i];
        }
    }

    cout << "Matrix 1--" << endl;
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << m1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}