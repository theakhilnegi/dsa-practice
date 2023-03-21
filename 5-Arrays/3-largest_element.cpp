#include <iostream>
using namespace std;

int func(int a[],int n){
    int num=a[0],index=0;
    for (int i = 1; i < n; i++)
    {
        if(num<a[i]){
            num=a[i];
            index=i;
        } 
    }
    return index;
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
    cout<<"Largest element is: "<<a[func(a,n)]<<" and index is: "<<func(a,n);
    return 0;
}