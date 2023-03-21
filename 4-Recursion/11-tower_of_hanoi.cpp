#include <iostream>
using namespace std;

void func(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move Disc 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    func(n-1,A,C,B);
    cout<<"Move Disc "<<n<<" from "<<A<<" to "<<C<<endl;
    func(n-1,B,A,C);
    return;
}

int main(){
    int n;
    char a='A',b='B',c='C';
    cout<<"Enter N: ";
    cin>>n;
    func(n,a,b,c);
    return 0;
}