#include <bits/stdc++.h>
using namespace std;

//method 1
// int func(vector<int> arr,vector<int> current, int index,int sum){
//     if(index==arr.size()){
//         int flag=0;
//         for (int i = 0; i < current.size(); i++)
//         {
//             flag=flag+current[i];
//         }
//         if(flag==sum){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     int x=func(arr,current,index+1,sum);
//     current.push_back(arr[index]);
//     int y=func(arr,current,index+1,sum);
//     return x+y;
// }

//method 2
int func(vector<int> arr,int n, int sum){
    if(n==arr.size()){
        if(sum==0){
        return 1;
    }else{
        return 0;
    }}
    return func(arr,n+1,sum)+func(arr,n+1,sum-arr[n]);
}
int main(){
    vector<int> arr{10,5,2,3,6};
    vector<int> current;
    int sum=8;
    // cout<<func(arr,current,0,sum);
    int n=arr.size();
    cout<<func(arr,0,sum);
    return 0;
}