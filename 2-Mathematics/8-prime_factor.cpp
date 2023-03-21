#include <iostream>
using namespace std;

// Naive solution       TC-> O(n2)
int funcN(int n){
    int size=n,count=1;
    while(n!=1){
        for (int i = 2; i <= size; i++)
        {
            if(n%i==0){
                count=i;
                cout<<i<<"  ";
                break;
            }
        }
        n=n/count;
    }
    return 1;
}

//Optimised method      TC-> O(root n)  
int funcO(int n){
    if(n<=1){
        return 0;
    }
    while(n%2==0){
        cout<<2<<"  ";
        n=n/2;
    }
    while(n%3==0){
        cout<<3<<"  ";
        n=n/3;
    }
    for (int i = 5; i*i <= n; i=i+6)
    {
        while(n%i==0){
            cout<<i<<"  ";
            n=n/i;
        }
        while(n%(i+2)==0){
            cout<<i<<"  ";
            n=n/(i+2);
        }
    }
    if(n>3){
        cout<<n;
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    funcO(n);
    return 0;
}