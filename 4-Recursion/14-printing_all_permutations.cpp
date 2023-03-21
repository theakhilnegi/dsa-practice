#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;	}

void func(string str,int n){
    if(n==str.length()-1){
        cout<<str<<" ";
        return;
    }
    for (int j = n; j < str.length(); j++)
    {   
        swap(str[n],str[j]);
        func(str,n+1);
        swap(str[n],str[j]);
    }
    return;
}

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    func(str,0);
    return 0;
}