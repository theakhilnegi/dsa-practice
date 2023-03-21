#include<bits/stdc++.h>
using namespace std;

//Naive method
int funcN(string s){
    int found;
    for (int i = 0; i < s.length(); i++)
    {   
        found = s.find(s[i], i+1);
        if(found!=string::npos){
            return i;
        }
    }
    return -1;
}

//optimised method 1
int funcO1(string s){
    int index[26];
    fill(index,index+26,-1);
    int res=INT16_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        int fi=index[s[i]-'a'];
        if(fi==-1){
            index[s[i]-'a']=i;
        }
        else{
            res=min(res,fi);
        }
    }
    return (res==INT16_MAX)?-1:res;
}

//optimised method 2
int funcO2(string s){
    int visited[26];
    fill(visited,visited+26,false);
    int res=-1;
    for (int i = s.length()-1; i >=0 ; i--)
    {;
        if(visited[s[i]-'a']){
            res=i;
        }
        else{
            visited[s[i]-'a']=true;
        }
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<funcO2(s);
    return 0;
}