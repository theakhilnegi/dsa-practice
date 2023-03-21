#include <iostream>
using namespace std;

// TC-> O(d), d is total digit
bool func(int n){
    int num=0,temp,copyN=n;
    while(n>0){
        temp=n%10;
        num=(num*10)+(temp);
        n=n/10;
    }
    return num==copyN;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<func(n);
    return 0;
}