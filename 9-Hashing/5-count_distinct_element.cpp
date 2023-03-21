#include<bits/stdc++.h>
using namespace std;

int func(int a[], int n){
    unordered_set <int > s(a,a+n);
    return s.size();
}
//-------OR------
// int func(int a[], int n){
//     unordered_set <int > s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a[i]);
//     }
//     return s.size();
// }

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