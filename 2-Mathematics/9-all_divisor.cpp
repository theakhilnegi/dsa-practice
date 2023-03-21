#include <iostream>
using namespace std;

// Naive method     TC-> O(n)
int funcN(int n){
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            cout<<i<<"  ";
        }
    }
    return 0;
}

// Optimised method     TC-> O(root n)
int funcO1(int n){
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            if(i!=n/i){
            cout<<i<<"  "<<(n/i)<<"  ";
            }else{
            cout<<i<<"  ";
            }
        }
    }
    return 0;
}

// Sorted Optimised method     TC-> O(root n)
int funcO2(int n){
    int flag;
    for (int i = 1; i*i < n; i++)
    {
        if(n%i==0){
            cout<<i<<"  ";
        }
        flag=i;
    }
    for (int i= flag; i>=1; i--)
    {
        if(n%i==0){
            cout<<n/i<<"  ";
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    funcO2(n);
    return 0;
}