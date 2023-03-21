#include <iostream>
using namespace std;

int func(int n,int k){
    if(n<1){
        return k;
    }
    return func(n-1, k+n); 
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<func(n,0);
    return 0;
}