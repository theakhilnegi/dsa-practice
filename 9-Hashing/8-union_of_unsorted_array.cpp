#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n,int b[], int m){
    unordered_set <int > z(a,a+n);
    for (int i = 0; i < m; i++)
    {
        z.insert(b[i]);
    }
    for(auto x:z){
        cout<<x<<" ";
    } 
    cout<<endl;
    return z.size();
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
    cout<<"Enter M: ";
    int m;
    cin>>m;
    int b[m];
    cout<<"Enter "<<m<<" number: ";
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    cout<<"Array is: ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<"  ";
    }
    cout<<endl;
    cout<<func(a,n,b,m);
    return 0;
}