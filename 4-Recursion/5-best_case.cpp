#include <iostream>
using namespace std;

int factorial(int n, int k){
    if(n<1){
        return k;
    }
    return factorial(n-1,k*n);
}

int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    cout<<fibonacci(i)<<"   ";
    }
    
    return 0;
}