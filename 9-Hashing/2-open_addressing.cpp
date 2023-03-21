#include<bits/stdc++.h>
using namespace std;

// This is open addressing
struct MyHash{
    int *arr;
    int cap,size;
    MyHash(int c){
        cap=c;
        size=0;
        for (int i = 0; i < cap; i++)
        {
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key%cap;
    }
    bool insert(int key){
        if(size==cap){
            return false;
        }
        int i = hash(key);
        while(arr[i]!=-1&&arr[i]!=-2&&arr[i]!=key){
            i=(i+1)%cap;
        }
        if(arr[i]==key){
            return false;
        }else{
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool search(int key){
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                return true;
            }
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
    }
    bool remove(int key){
        int h= hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
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