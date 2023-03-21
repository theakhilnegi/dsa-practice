#include<bits/stdc++.h>
using namespace std;

void funcN(string s){
    string temp="";
    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]==' '||i==0){
            if(i==0){
            cout<<s[0]+temp;
            return ;
            }
            cout<<temp<<" ";
            temp="";
        }else{
            temp=s[i]+temp;
        }
    }
}

// not working properly as this is very complex to run in string but in char array it will work properly
void funcO(string s){
    int start=0;
    for (int end = 0; end < s.length(); end++)
    {
        if(s[end]==' '){
            reverse(s.begin() + start, s.begin() + end-1);
            start = end+1;
        }
    }
    reverse(s.begin()+start, s.begin() + s.length()-1);
    reverse(s.begin(), s.begin() + s.length()-1);
    cout<<s;
}

int main(){
    string s;
    cout<<"Enter string: ";
    getline (cin, s);
    funcO(s);
    return 0;
}