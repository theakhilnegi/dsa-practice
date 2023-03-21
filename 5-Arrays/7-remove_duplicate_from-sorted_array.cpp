#include <iostream>
using namespace std;

// Naive method
int funcN(int a[],int n){
    int temp[n],res=1;
    temp[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        if(temp[res-1]!=a[i]){
            temp[res]=a[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        a[i]=temp[i];
    }
    
    return res;
}

//Optimised method
int funcO(int a[],int n){
    int res=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
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

    n=funcO(a,n);
    cout<<"\n Reverse array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}