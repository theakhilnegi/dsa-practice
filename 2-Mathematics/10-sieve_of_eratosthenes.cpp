#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// it is algo of printing prime number till given number in TC-> O(nloglogn)
int func(int n){
    vector<bool> isPrime(n+1,true);
    for (int i = 2; i*i <= n; i++)
    {
        if(isPrime[i]){
            for (int j = 2*i; j <= n; j=j+i)
            {
                isPrime[j]=false;
            }
            
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i]){
            cout<<i<<"  ";
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    func(n);
    return 0;
}