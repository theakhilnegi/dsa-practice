#include <iostream>
using namespace std;

// Iterative power(binary exponentiation) give TC-> O(logn) and AS->O(1)
// it is based on two points:
// 1) every number can be written as sum of powers of 2(set bits in binary representation)
// 2) we can traverse through all bits of a number (from lsb to msb) in logn time
// we are making bit rep of n for eg n=10, then 1010 and if 1 is there then ans=ans*x and if 0 then ignore 
// update x accordingly like 3, 3^2, 3^4, 3^8...

int func(int x,int n){
    int ans=1;
    while(n>0){
        if(n%2!=0){
            ans=ans*x;
        }
        n=n/2;
        x=x*x;
    }
    return ans;
}

int main(){
    int n,x; 
    cout<<"Enter X and N: ";
    cin>>x;
    cin>>n;
    cout<<func(x,n);
    return 0;
}