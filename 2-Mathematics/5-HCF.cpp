#include <iostream>
using namespace std;

// Naive method     TC->O(min(n,m))
int min(int a, int b){
    if(a<b){
        return a;
    }return b;
}
int funcN(int n,int m){
    int x=min(n,m);
    while(x>0){
        if(n%x==0 && m%x==0){
            return x;
        }
        x--;
    }
}

// Optimised mathod     
// We use euclidean algorithm HCF(a,b) = HCF(a-b,b)
int funcO(int a, int b){
    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

// More Optimised euclidean method      TC-> O(log(min(a,b)))
int funcO2(int a, int b){
    if(b==0){
        return a;
    }
    return funcO2(b,a%b);
}

int main(){
    int n,m;
    cout<<"Enter N and M: ";
    cin>>n;
    cin>>m;
    cout<<funcO2(n,m);
    return 0;
}