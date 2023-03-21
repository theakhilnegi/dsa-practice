#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int k){
  unordered_map<int, int> um;
    int sum = 0, maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k)
            maxLen = i + 1;
        if (um.find(sum) == um.end())
            um[sum] = i;
        if (um.find(sum - k) != um.end()) {
            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
    return maxLen;
}

int main(){
    cout<<"Enter N: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" number: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<"Enter k: ";
    int k;
    cin>>k;
    cout<<func(a,n,k);
    return 0;
}