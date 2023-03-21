#include<bits/stdc++.h>
using namespace std;

void func(int a[], int n){
    unordered_map<int ,int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
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
    func(a,n);
    return 0;
}