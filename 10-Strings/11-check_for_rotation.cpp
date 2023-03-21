#include<bits/stdc++.h>
using namespace std;

//Naive method
bool funcN(string s1, string s2){
    for (int i = 0; i < s1.length(); i++)
    {
        int j=0;
        if(s2[j]==s1[i]){
            while(j!=s2.length()&&s1[((i+j)%s1.length())]==s2[j]){
                j++;
            }
            if(j==s2.length()){
                return true;
            }
        }
    }
    return false;
}

//optimised method using kmp
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
bool KMP(string pat, string txt){
    int n=txt.length();
    int m=pat.length();
    int lps[m];
    bool ans=false;
    fillLPS(pat,lps);
    int i=0,j=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
            ans=true;
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
    return ans;
}
bool funcO1(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    s1=s1+s1;
    cout<<s1<<endl;
    return KMP(s2,s1);
}

//another optimised approach
bool funcO2(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    return ((s1+s1).find(s2)!=string::npos);
}

int main(){
    string s1,s2;
    cout<<"Enter string: ";
    cin>>s1;
    cout<<"Enter string: ";
    cin>>s2;
    cout<<funcO2(s1,s2);
    return 0;
}