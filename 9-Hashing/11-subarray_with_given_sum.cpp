#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n, int k){
    unordered_set <int > z;
    int prefix_sum=a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum=prefix_sum+a[i];
        if(z.find(prefix_sum-k)!=z.end()){ 
            return 1;
        }
        if(prefix_sum==k){
            return 1;
        }
        z.insert(prefix_sum);
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
    cout<<"Enter k: ";
    int k;
    cin>>k;
    cout<<endl;
    cout<<func(a,n,k);
    return 0;
}