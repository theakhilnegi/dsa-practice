#include<bits/stdc++.h>
using namespace std;

void funcN1(string s1, string s2){
    int flag=true;
    for (int i = 0; i < s1.length()-s2.length()+1; i++)
    {
        if(s1.find(s2,i)==i){
            flag=false;
            cout<<i<<" ";
        }
    }
    if(flag){
        cout<<"Not present";
    }
}

//improved naive but for only distinct character
void funcN2(string s1, string s2){
    for (int i = 0; i <= s1.length()-s2.length();)
    {
        int j;
        for (j = 0; j < s2.length(); j++)
        {
             if(s2[j]!=s1[i+j]){
                 break;
             }
        }
        if(j==s2.length()){
            cout<<i<<" ";
        }
        if(j==0){
            i++;
        }else{
            i=i+j;
        }
    }
}

int main(){
    string s1,s2;
    cout<<"Enter string one: ";
    cin>>s1;
    cout<<"Enter string two: ";
    cin>>s2;
    funcN2(s1,s2);
    return 0;
}