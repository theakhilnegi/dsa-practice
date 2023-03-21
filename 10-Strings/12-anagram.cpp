#include<bits/stdc++.h>
using namespace std;
int CHAR =256;

//Naive method
bool areAnagram(string &pat, string &txt, int i){
    int count[CHAR] = {0};
    for (int j = 0; j < txt.length(); j++)
    {
        count[pat[i]]++;
        count[txt[i+j]]--;
    }
    for (int j = 0; j < CHAR; j++)
    {
        if(count[j]!=0){
            return false;
        }
    }
    return true;
}
bool isPresent(string &txt, string &pat){
    int n=txt.length();
    int m=pat.length();
    for (int i = 0; i < n-m; i++)
    {
        if(areAnagram(pat,txt,i)){
            return true;
        }
    }
    return false;
}

//optimised method
bool areSame(int a[],int b[]){
    for (int i = 0; i < CHAR; i++)
    {
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool func(string &txt, string &pat){
    int CT[CHAR]={0}, CP[CHAR]={0};
    for (int i = 0; i < pat.length(); i++)
    {
        CT[txt[i]]++;
        CP[pat[i]]++;
    }
    for (int i = pat.length(); i < txt.length(); i++)
    {
        if(areSame(CT,CP)){
            return true;
        }
        CT[txt[i]]++;
        CT[txt[i-pat.length()]]--;
    }
    return false;
}

int main(){
    string s1,s2;
    cout<<"Enter string: ";
    cin>>s1;
    cout<<"Enter string: ";
    cin>>s2;
    cout<<func(s1,s2);
    return 0;
}