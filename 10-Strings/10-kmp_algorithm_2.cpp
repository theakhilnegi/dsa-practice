#include<bits/stdc++.h>
using namespace std;

void fillLPS(string s,int lps[]){
	int n=s.length(), i =1, len=0;
	lps[0]=0;
	while(i<n){
		if(s[i]==s[len]){
			len++;	lps[i]=len;	
			i++;
		}
		else{
			if(len==0){
				lps[i]=0;
				i++;
			}else{
				len=lps[len-1];
			}
		}
	}
}

void KMP(string pat, string txt){
    int n=txt.length();
    int m=pat.length();
    int lps[m];
    fillLPS(pat,lps);
    int i=0,j=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<(i-j)<<" ";
            j=lps[j-1];
        }
        else if(i<n&&pat[j]!=txt[i]){
            if(j==0){
                i++;
            }    
            else{
                 j=lps[j-1];
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
    KMP(pat,txt);
    return 0;
}