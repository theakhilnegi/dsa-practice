#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

long long int fact(int n){
    long long int ans=1;
    for (int i = 2; i <= n; i++)
    {
        ans=ans*i;
    }
    return ans; 
}

int func(string s){
    int res=1;
    int n=s.length();
    int mul=fact(n);
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++)
    {
        count[s[i]]++;
    }
    for (int i = 1; i < CHAR; i++)
    {
        count[i]+=count[i-1];
    }
    for (int i = 0; i < n-1; i++)
    {
        mul=mul/(n-i);
        res=res+count[s[i]-1]*mul;
        for (int j = s[i]; j < CHAR; j++)
        {
            count[j]--;
        }
    }
    return res;
}

int main(){
    string s; 
    cout<<"Enter string: ";
    cin>>s;
    cout<<func(s);
    return 0;
} 