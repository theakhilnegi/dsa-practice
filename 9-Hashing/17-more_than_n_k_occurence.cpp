#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n, int k){
    int temp=n/k;
    unordered_map<int ,int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for(auto x:m){
        if(x.second>temp){
        cout<<x.first<<" ";
        }
    }
    return 0;
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
    func(a,n,2);
    return 0;
}