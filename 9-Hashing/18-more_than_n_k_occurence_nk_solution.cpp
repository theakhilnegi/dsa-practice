#include<bits/stdc++.h>
using namespace std;

//res.count <= k-1   !strictly
int func(int a[], int n, int k){
// not done
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