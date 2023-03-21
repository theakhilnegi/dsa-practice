#include <iostream>
using namespace std;

// Naive method     TC-> O(n)
int funcN(int n, int x){
    int temp=n;
    for (int i = 0; i < x-1; i++)
    {
            n=n*temp;
    }
    return n;
}

// Optimised method     
int funcO1(int n, int x){
    if(x==1){
        return n;
    }
    if(x%2==0){
        return funcO1(n,x/2)*funcO1(n,x/2);
    }else{
        return funcO1(n,x-1)*n;
    }
}

// more optimised method     TC-> O(logn)   AS-> O(logn)
int funcO2(int x, int n){
    if(n==0){
        return 1;
    }
    int temp = funcO2(x,n/2);
    temp = temp*temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*x;
    }
}

int main(){
    int n;
    int x;
    cout<<"Enter N and X: ";
    cin>>n;
    cin>>x;
    cout<<funcO2(n,x);
    return 0;
}