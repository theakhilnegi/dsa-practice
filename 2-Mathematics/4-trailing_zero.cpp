#include <iostream>
using namespace std;

// Naive method     TC -> O(n)
int funcN(int n){
    unsigned long long int factorial=1;
    int count=0;
    for (int i = 2; i <= n; i++)
    {
        factorial=factorial*i;
    }
    while(factorial%10==0){
        count++;
        factorial=factorial/10;
    }
    return count;
}

// Optimised method     TC -> O(log n)
int funcO(int n){
    int ans=0;
    for (int i = 5; i <= n; i=i*5)
    {
        ans = ans+n/i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<funcO(n);
    return 0;
}