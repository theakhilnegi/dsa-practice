#include <iostream>
using namespace std;

// Naive method     TC-> O(root n)
bool funcN(int n){
    if(n<2){
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {   
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// Optimised method     almost 3X faster than naive having loop till n not root n
bool funcO(int n){
    if(n==2 || n==3){
        return true;
    }
    if(n<2 || n%2==0 ||n%3==0){
        return false;
    }
    for (int i = 5; i*i <= n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<funcO(n)<<endl;
    for (int i = 0; i <= 100; i++)
    {
        if(funcO(i)==1){
            cout<<i<<"  ";
        }
    }
    return 0;
}