// Write a program to display multiplication of two matrices entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    
    cout << "Enter the row of the 1st matrix ";
    cin >> r1;
    cout << "Enter the column of the 1st matrix ";
    cin >> c1;
    cout << "Enter the element in the 1st matrix" << endl;

    int m1[r1][c1];
   
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the row of the 2nd matrix ";
    cin >> r2;
    cout << "Enter the column of the 2nd matrix ";
    cin >> c2;
    cout << "Enter the element in the 2nd matrix" << endl;
    int m2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "Matrix 1--" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << m1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Matrix 2--" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << m2[i][j]<<" ";
        }
        cout<<endl;
    }
    int resultant[r1][c2];
    if (c1 != r2)
    {
        cout << "Multiplication of these matrices are not possible" << endl;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value=0;
            for (int k = 0; k < r2; k++)
            {
                value += m1[i][k] * m2[k][j];
            }
            resultant[i][j]=value;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << resultant[i][j]<<" ";
        }
        cout<<endl;
    }   
    return 0;
}