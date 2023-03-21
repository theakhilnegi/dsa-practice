#include <iostream>
using namespace std;

// tail recursion,      AS-> O(1)
// int func(int n, int sum){
//     if(n<10){
//         sum+=n;
//         return sum;
//     }
//     sum+=(n%10);
//     return func(n/10,sum);
// }

// non tail recursive,  AS-> O(n)
int func(int n){
    if(n<10){
        return n;
    }
    return (n%10)+func(n/10);
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<func(n);
    return 0;
}