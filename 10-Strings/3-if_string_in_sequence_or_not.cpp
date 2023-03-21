#include<bits/stdc++.h>
using namespace std;

int func(string s1,string s2){
    int j=0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]==s2[j]){
            j++;
        }
        if(j==s2.length()){
            return 1;
        }
    }
    return 0;
}

int main(){
    string s1;
    cout<<"Enter string: ";
    cin>>s1;
    string s2;
    cout<<"Enter string: ";
    cin>>s2;
    cout<<func(s1,s2);
    return 0;
}