#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["abc"]=20;
    m["trs"]=23;
    m.insert({"akhil",21});
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    if(m.find("trs")!=m.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    for (auto it=m.begin();  it!=m.end(); it++)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    if(m.count("abc")>0){
        cout<<"found";
    }else{
         cout<<"not found";
    }
    cout<<endl;
    cout<<m.size();
    cout<<endl;
    m.erase("trs");
    cout<<m.size();
    return 0;
}