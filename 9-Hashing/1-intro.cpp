#include<bits/stdc++.h>
using namespace std;

// This is chaining
struct MyHash{
    int BUCKET;
    list<int> *table;
    MyHash(int b){
        BUCKET = b;
        table = new list<int> [b];
    }
    void insert(int key){
        int i = key%BUCKET;  
        table[i].push_back(key);
    } 
    bool search(int key){
        int i = key%BUCKET;
        for (auto x: table[i])
        { 
            if(x==key){
                return true;
            }
            return false;
        }
         
    }
    void remove(int key){
        int i = key%BUCKET;
        table[i].remove(key);
    }
};

int main(){
    MyHash mh(7);
    mh.insert(49);
    mh.insert(12);
    mh.insert(34);
    if(mh.search(12)==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    mh.remove(12);
    if(mh.search(12)==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}