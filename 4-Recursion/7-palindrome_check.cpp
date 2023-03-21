#include <iostream>
#include <string>
using namespace std;

// Method 1,            TC-> O(n)
// int n=0;
// int func(string str, string ans){
//     if(n==(str.length())){
//     return ans==str;
//     }
//     int count = (str.length())-n;
//     ans.push_back(str[count-1]);
//     n++;
//     return func(str,ans);
// }


// Method 1,            TC-> O(nlog n)
int func(string str){
    if(str.length()==1){
        return 1;
    }
    if(str.length()==2){ 
        if(str[0]==str[1]){
            return 1;
        }return 0;
    }
    if(str[0]==str[str.length()-1]){
        string r = str.substr(1, str.length()-2);
        return func(r);
    }else{
        return 0;
    }
}

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    cout<<func(str);
    return 0;
}