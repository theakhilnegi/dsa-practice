#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n, int k){
    unordered_set <int > z(a,a+n);
    int sum=k,temp;
    for (int i = 0; i < n; i++)
    {
        temp=sum;
        int flag=temp-a[i];
        auto it = z.find(a[i]);
        z.erase(it);
        if(z.find(flag)!=z.end()){
            return 1;
        } 
    }
    return 0;
}
//-------OR-----------
int func1(int a[], int n, int k){
    unordered_set <int > s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(k-a[i])!=s.end()){
            return 1;
        }
        s.insert(a[i]); 
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
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    cout<<func(a,n,sum);
    return 0;
}