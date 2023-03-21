#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(35);
    s.insert(13);
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    for (auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    if(s.find(15)==s.end()){
        cout<<"Not found";
    }else{
        cout<<"found";
    }
    cout<<endl;
    cout<<s.size()<<" ";
    auto it = s.find(13);
    s.erase(it);
    cout<<endl;
    cout<<s.size()<<" ";
    cout<<endl;
    s.clear();
    cout<<s.size()<<" ";
    return 0;
}