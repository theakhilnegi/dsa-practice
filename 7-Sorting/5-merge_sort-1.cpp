#include <iostream>
using namespace std;

int func(int a[], int n, int b[], int m){
    int res[m+n],count=0;
    int x=0,y=0;
    while(x<m && y<n)
    {
        if(a[x]<=b[y]){
            res[count]=a[x];
            x++;
            count++;
        }else{
            res[count]=b[y];
            y++;
            count++;
        }
    }
    while(x<n){
        res[count]=a[x];
        x++;
        count++;
    }
    while(y<m){
        res[count]=b[y];
        y++;
        count++;
    }
    for (int i = 0; i < (m+n); i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}

int main(){
    cout<<"Enter N: ";
    int n,m;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" number of 1st array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"1st Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nEnter N: ";
    cin>>m;
    int b[m];
    cout<<"Enter "<<m<<" number of 2nd array: ";
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    cout<<"2nd Array is: ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<"  ";
    }
    cout<<endl;

    func(a,n,b,m);

    return 0;
}