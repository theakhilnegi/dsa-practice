#include<bits/stdc++.h>
using namespace std;

void print_frequency(string s){
    int count[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
        }
    }
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    print_frequency(s);
    s+="xyz";
    cout<<endl;
    cout<<s;
    cout<<endl;
    cout<<s.substr(1,3);
    cout<<endl;
    cout<<s.find("eek");
    string a="akhil";
    cout<<endl;
    if(s==a){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    cout<<endl;
    if(s>a){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    cout<<endl;
    string b;
    getline(cin,b,' ');
    cout<<b;
    cout<<endl;
    for(char x: b){
        cout<<x;
    }
    return 0;
}