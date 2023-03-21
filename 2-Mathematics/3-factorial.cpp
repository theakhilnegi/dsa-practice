#include <iostream>
using namespace std;

//iterative     TC=O(n) and AS=O(1)
long long int funcI(int n){
    long long int ans=1;
    for (int i = 2; i <= n; i++)
    {
        ans=ans*i;
    }
    return ans;
}

//recursive     TC=O(n) and AS=O(n)
long long int funcR(long long int n){
    if(n==1||n==0){
        return 1;
    }
    return n*funcR(n-1);
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<funcR(n);
    return 0;
}