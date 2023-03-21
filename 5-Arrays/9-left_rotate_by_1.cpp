#include <iostream>
using namespace std;

int func(int a[],int n){
    int temp = a[0];
    for (int i = 0; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
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
    func(a,n);
    cout<<"\nReverse array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}