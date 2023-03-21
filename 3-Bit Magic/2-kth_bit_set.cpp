#include <iostream>
using namespace std;

bool func(int n, int k){
    if((n & (1<<(k-1)))==0){
        return false;
    }
    return true;
}

int main(){
    int n,k;
    cout<<"Enter N and k: ";
    cin>>n>>k;
    cout<<func(n,k);
    return 0;
}