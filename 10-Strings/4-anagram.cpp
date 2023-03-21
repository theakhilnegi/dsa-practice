#include<bits/stdc++.h>
using namespace std;

int func(string s1,string s2){
    int count[256]={0};
    if(s1.length()!=s2.length()){
        return 0;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for (int i = 0; i < 256; i++)
    {
        if(count[i]!=0){
            return 0;
        }
    }
    return 1;
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
