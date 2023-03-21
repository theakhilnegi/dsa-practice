#include <iostream>
using namespace std;

bool func(int a[], int n){
    if(n<2){
        return true;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
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
    cout<<"Sorted: "<<func(a,n);
    return 0;
}