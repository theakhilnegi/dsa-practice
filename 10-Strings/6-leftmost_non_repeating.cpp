#include<bits/stdc++.h>
using namespace std;

//Naive method
int funcN(string s){
    int Nfound;
    int count[26];
    fill(count,count+26,true);
    for (int i = 0; i < s.length(); i++)
    {   
        if(count[s[i]-'a']==true){
            Nfound = s.find(s[i], i+1);
            if(Nfound==string::npos){
                return i;
            }else{
                count[s[i]-'a']=false;
            }
        }
    }
    return -1;
}

//optimised method
int funcO(string s){
    int index[26];
    fill(index,index+26,-1);
    int res=INT16_MAX;
    for (int i = 0; i < s.length(); i++)
    {   
        if(index[s[i]-'a']==-1){
            index[s[i]-'a']=i;
        }else{
            index[s[i]-'a']=-2;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(index[i]>=0){
            res=min(res,index[i]);
        }
    }
    return (res==INT16_MAX)?-1:res;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<funcO(s);
    return 0;
}