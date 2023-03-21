#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;

//naive method  O(n3)
bool areDistinct(string s,int i,int j){
    vector<bool> visited(256);
    for (int k = i; k <= j; k++)
    {
        if(visited[s[k]]==true){
            return false;
        }
        visited[s[k]]=true;
    }
    return true;
}
int longestDistinct(string s){
    int n=s.length(),res=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(areDistinct(s,i,j)){
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

//second naive  O(n2)
int longestDistinct2(string s){
    int n=s.length(),res=0;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256);
        for (int j = i; j < n; j++)
        {
            if(visited[s[j]]==true){
                break;
            }else{
                res=max(res,j-i+1);
                visited[s[j]]=true;
            }
        }
    }
    return res;
}

//optimised method  O(n)
int longestDist(string s){
    int n=s.length(),res=0;
    vector<int> prev(251,-1);
    int i=0;
    for (int j = 0; j < n; j++)
    {
        i=max(i,prev[s[j]]+1);
        int maxEnd = j-i+1;
        res=max(res,maxEnd);
        prev[s[j]]=j;
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<longestDist(s);
    return 0;
}