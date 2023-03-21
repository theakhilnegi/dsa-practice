#include <iostream>
using namespace std;

// Naive method
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
int funcN(int n, int m){
    int x = min(n,m);
    int y = max(n,m);
    int flag=1,temp;
    while (true)
    {
        temp = y*flag;
        if(temp%x==0){
            return temp;
        }
        flag++;
    }
}

// Optimised method using a*b=hcf(a,b)*lcm(a,b)     TC-> O(log(min(a,b)))
int hcf(int a, int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}
int funcO(int n, int m){
    return (n*m)/hcf(n,m);
}

int main(){
    int n,m;
    cout<<"Enter N and M: ";
    cin>>n;
    cin>>m;
    cout<<funcN(n,m);
    return 0;
}