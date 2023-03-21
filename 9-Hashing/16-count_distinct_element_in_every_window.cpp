#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n, int k ){
    for (int i = 0; i <= n-k; i++)
    {
        unordered_set <int>s;
        for (int j = 0; j < k; j++)
        {
            s.insert(a[i+j]);
        }
        cout<<s.size()<<" ";
    }
    return 0;
}
// gfg code is not there that has O(n)
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
    func(a,n,3);
    return 0;
}