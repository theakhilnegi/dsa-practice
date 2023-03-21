#include <iostream>
using namespace std;

//Naive method
int funcN(int a[],int n){
    int res=0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax=a[i];
        int rmax=a[i];
        for (int j = i-1; j >= 0; j--)
        {
            lmax=max(lmax,a[j]);
        } 
        for (int j = i+1; j < n; j++)
        {
            rmax=max(rmax,a[j]);
        }
        res=res+((min(lmax,rmax))-a[i]);
    }
    return res;
}

//Optimised method
int funcO(int a[],int n){
    int lmax[n],rmax[n],res=0;
    lmax[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i]=max(lmax[i-1],a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<lmax[i]<<"  ";
    }
    cout<<endl;
    rmax[n-1]=a[n-1];
    for (int i = n-2; i>=0; i--)
    {
        rmax[i]=max(rmax[i+1],a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<rmax[i]<<"  ";
    }
    cout<<endl;
    for (int i = 1; i < n-1; i++)
    {
    res=res+((min(lmax[i],rmax[i]))-a[i]);
    }
    return res;
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
    cout<<"Water is: "<<funcO(a,n);
    return 0;
}