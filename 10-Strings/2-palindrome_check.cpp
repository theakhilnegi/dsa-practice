#include<bits/stdc++.h>
using namespace std;

int func(string s){
    int n=s.length();
    for (int i = 0; i < s.length()/2; i++)
    {
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<func(s);
    return 0;
}