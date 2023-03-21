#include <iostream>
using namespace std;

//Naive method      TC-> O(number of count of bits)
int funcN1(int n){
    int ans=0;
    while (n>0)
    {
        if(n%2!=0){
            ans++;
        }
        n=n/2;
    }
    return ans;
}
int funcN2(int n){
    int ans=0;
    while (n>0)
    {
        if((n&1)==1){
            ans++;
        }
        n=n>>1;
    }
    return ans;
}

// Optimised method

// Brian kerningam's algorithm      TC-> O(no of set bit)
// if n is minus with n-1 then the first bit after trailing 0 become 0 
// 101000  | n=40                   100000  | n=32
// 100111  | n-1=39                 011111  | n-1=31
// ----------------                 ----------------
// 100000  | n=32                   000000  | 0
int funcO1(int n){
    int ans=0;
    while(n>0){
        n=(n&(n-1));
        ans++;
    }
    return ans;
}

//Loopup table method for 32 bit number
int table[256];
void initialize(){
    table[0]=0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i&1) + table[i/2];
    }
}
int count(int n){
    int ans = table[n&0xff];                // n & 0xff is done for getting last 8 bits of n
    n = n>>8;                               // 0xff   ->   00000000...11111111
    ans = ans + table[n&0xff];              // n      ->   01101101...01101100
    n = n>>8;                               // n&0xff ->   00000000...01101100
    ans = ans + table[n&0xff];
    n = n>>8;
    ans = ans + table[n&0xff];
    return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<funcN2(n);
    return 0;
}