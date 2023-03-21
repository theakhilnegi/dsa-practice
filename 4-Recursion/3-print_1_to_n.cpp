#include <iostream>
using namespace std;

int func(int n){
    if(n<1){
        return 0;
    }
    func(n-1);
    cout<<n<<"  ";
    return 0;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    func(n);
    return 0;
}