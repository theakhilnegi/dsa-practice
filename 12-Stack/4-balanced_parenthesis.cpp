 #include<bits/stdc++.h>
using namespace std;

bool matching(char a, char b){
    return ((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
}
int func(string n){
    stack <char> s;
    s.push(n[0]);
    for (int i = 1; i < n.length(); i++)
    {
        if(n[i]=='('||n[i]=='{'||n[i]=='['){
            s.push(n[i]);
        }else{
            if(s.empty()==true){
                return false;
            }else if(matching(s.top(),n[i])==false){
                return false;
            }else{
                s.pop();
            }
        }
    }
    return s.empty()?true:false;
}

int main(){
    string n;
    cout<<"Enter string: ";
    cin>>n;
    cout<<func(n);
    return 0;
}