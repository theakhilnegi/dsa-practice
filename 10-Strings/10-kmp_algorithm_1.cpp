#include<bits/stdc++.h>
using namespace std;

//Naive method O(n3)
int longPropPreSuff(string s, int n){
	for (int len = n-1; len > 0; len--)
	{
		bool flag=true;
		for (int i = 0; i < len; i++)
		{
			if(s[i]!=s[n-len+i]){
				flag=false;
			}
		}
		if(flag==true){
			return len;
		}
	}
		return 0;
}
void fillLPSNaive(string s,int lps[]){
	for (int i = 0; i < s.length(); i++)
	{
		lps[i]=longPropPreSuff(s,i+1);
	}
}

//KMP method, O(n)
void fillLPSOptimised(string s,int lps[]){
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



int main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	int a[s.length()];
	fillLPSOptimised(s,a);
	for (int i = 0; i < s.length(); i++)
	{
		cout<<a[i];
	}
	
	return 0;
}