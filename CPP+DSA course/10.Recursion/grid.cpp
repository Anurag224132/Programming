// The problem is to count all the possible paths on an m*n grid from top left (grid[0][0]) to bottom right (grid[m-1][n-1])
// Having constraints that from each cell you can either move only to right or down.
// input m=2,n=3
// output 3
#include<iostream>
using namespace std;
int path(int i,int j,int m,int n){
    if(i==m-1 || j==n-1) return 1;
    if(i>m && j>n) return 0;
    return path(i,j+1,m,n)+path(i+1,j,m,n);
}
int main(){
    int n,m;
    cout<<"Enter the rows in matrix ";
    cin>>n;
    cout<<"Enter the column in matrix ";
    cin>>m;
    cout<<path(0,0,m,n);
    return 0;
}