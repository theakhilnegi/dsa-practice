#include<bits/stdc++.h>
using namespace std;

void func(string pat, string txt, int m, int n){
    int h=1,d=5,q=97;
    for (int i = 1; i <= m-1; i++)
    {
        h=(h*d)%q;
    }
    int p=0, t=0;
    for (int i = 0; i < m; i++)
    {
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    for (int i = 0; i <= n-m; i++)
    {
        if(p==t){
            bool flag=true;
            for (int j = 0; j < m; j++)
            {
                if(txt[i+j]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<i<<" ";
            }
        }
        if(i<n-m){
            t=((d*(t-txt[i]*h)+txt[i+m])%q);
            if(t<0){
                t=t+q;
            }
        }
    }
}

int main(){
    string pat,txt;
    cout<<"Enter string: ";
    cin>>txt;
    cout<<"Enter string: ";
    cin>>pat;
    func(pat,txt,pat.length(),txt.length());
    return 0;
}