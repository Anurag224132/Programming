// given an array of integers 'a' that is sorted in non decreasing order . Find the first
// and the last position of the given 'target' element in the sorted aray. Follow 0-based
// indexing.
// if 'target' is not found in the array , return [-1,-1].
// input: [1,2,3,3,3,5,11]  target=3
// output=[2,4]



// #include <iostream>
// #include<vector>
// using namespace std;
// int lower(vector <int> &v,int target){
//     int l=0;
//     int h=v.size()-1;
//     int mid=l+(h-l)/2;
//     int ans=-1;
//     while(l<=h){
//         if(v[mid]>=target){
//             ans=mid;
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return ans;
// }

// int upper(vector <int> &v,int target){
//     int l=0;
//     int h=v.size()-1;
//     int mid=l+(h-l)/2;
//     int ans=-1;
//     while(l<=h){
//         if(v[mid]>target){
//             ans=mid;
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;

//     cout<<"Enter n ";
//     cin>>n;
//     std::vector<int> input;
//     cout<<"Enter elemnets "<<endl;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     int target;
//     cout<<"Enter target"<<endl;
//     cin>>target;
//     std:: vector<int>result;
//     int lb=lower(input,target);
//     if(input[lb]!=target){
//         result.push_back(-1);
//         result.push_back(-1);
//     }
//     else{
//         int up=upper(input,target);
//         result.push_back(lb);
//         result.push_back(up-1);
//     }
//     cout<<result[0]<<" "<<result[-1]<<"\n";
//     return 0;

// }