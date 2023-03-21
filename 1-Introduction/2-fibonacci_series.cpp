#include <iostream>
using namespace std;

// iteration
// i=2,    c=1,   a=1,   b=1 
// i=2,    c=2,   a=1,   b=2 
// i=2,    c=3,   a=2,   b=3 
int funcI(int n){
    int a=1,b=1,c=1;
    if (n==0 || n==1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

// recursion
int funcR(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    return funcR(n-1)+funcR(n-2);
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<funcR(i)<<endl;
    }
    return 0;
}