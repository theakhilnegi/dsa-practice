#include <iostream>
using namespace std;

int func(int a[],int n, int b[], int m){
    int i=0,j=0,temp=min(a[0],b[0]);
    cout<<temp<<" ";
    while (i<n&&j<m)
    {
        if(a[i]==temp){
            i++;
            continue;
        }
        if(b[j]==temp){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            temp=a[i];
            i++;
        }else{
            cout<<b[j]<<" ";
            temp=b[j];
            j++;
        }
    }
    while(i<n){
        if(a[i]==temp){
            i++;
            continue;
        }
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m){
        if(b[j]==temp){
            j++;
            continue;
        }
        cout<<b[j]<<" ";
        j++;
    }
    return 0;
}

int main(){
    cout<<"Enter N: ";
    int n,m;
    cin>>n;
    int a[n];
    cout<<"Enter 1st array "<<n<<" number: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"1st Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nEnter M: ";
    cin>>m;
    int b[m];
    cout<<"Enter 2nd array "<<m<<" number: ";
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