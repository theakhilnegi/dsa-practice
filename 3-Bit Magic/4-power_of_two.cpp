#include <iostream>
using namespace std;

//Naive method
bool funcN(int n){
    int flag=n,count=0;
      if(n==0){
        return false;
    }
    while(n>1){
        count++;
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    cout<<flag<<" -> "<<count<<endl;
    return true;
}

//Optimised method
bool funcO(int n){
    return (n!=0)&&((n&(n-1))==0);
}

int main(){
    int n;
    cout<<"Enter N: "; 
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        funcN(i);
    }
    for (int i = 1; i <= n; i++)
    {
        if(funcO(i)==1){
            cout<<i<<"  ";
        }
    }
    
    return 0;
} 