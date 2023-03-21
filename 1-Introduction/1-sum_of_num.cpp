#include<iostream>
using namespace std;

int func(int n){
    int sum;
    sum = (n*(n+1)/2);
    return sum;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<endl<<"sum of "<<n<<" natural number is: "<<func(n);
    return 0;
}