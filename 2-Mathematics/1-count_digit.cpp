#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//iterative
// TC-> O(d), d is total digit
int funcI(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }    
    return count;
}

//recursive
int funcR(int n){
    if(n==0){
        return 0;
    }
    return 1+funcR(n/10);
}

//logarithmic
long long int funcL(long long int n){
    return (log10(n)+1);
}

int main(){
    long long int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<funcR(n);
    return 0;
}