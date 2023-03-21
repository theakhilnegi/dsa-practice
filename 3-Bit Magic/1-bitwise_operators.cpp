#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int n,int m){
    cout<<(n&m)<<endl;      //and 
    cout<<(n|m)<<endl;      //or
    cout<<(n^m)<<endl;      //XOR
    return 0;
}

int func2(int n){
    cout<<(n<<1)<<endl;     //left shift    is equal to (x*2^y) here x is n and y is 1
    cout<<(n>>1)<<endl;     //right shift   is equal to floor(x/2^y) here x is n and y is 1
    cout<<(~n)<<endl;
    return 0;
}

int main(){
    unsigned int n;
    int m;
    cout<<"Enter N and M: ";
    cin>>n;
    cin>>m;
    func(n,m);
    func2(n);
    return 0;
}