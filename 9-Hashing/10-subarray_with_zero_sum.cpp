#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n){
    unordered_set <int > z;
    int prefix_sum=0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum=prefix_sum+a[i];
        if(z.find(prefix_sum)!=z.end()){
            return 1;
        }
        if(prefix_sum==0){
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
    cout<<endl;
    cout<<func(a,n);
    return 0;
}