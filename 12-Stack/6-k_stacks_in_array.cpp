#include<bits/stdc++.h>
using namespace std;

struct kStack{
    int *arr,*top,*next;
    int k, freeTop, cap;
    kStack(int k1,int n){
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        for (int i = 0; i < k; i++)
        {
            top[i]=-1;
        }
        freeTop = 0;
        for (int i = 0; i < cap-1; i++)
        {
            next[i]=i+1;
        }
        next[cap-1];
    }
    void push(int x, int sn){
        int i=freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn){
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }
};

int main(){
    kStack s(5,100);
    s.push(15,0);
    s.push(20,0);
    s.push(35,1);
    cout<<s.pop(0)<<endl;
    cout<<s.pop(1)<<endl;
    s.push(5,1);
    cout<<s.pop(1)<<endl;
    cout<<s.pop(0)<<endl;
    return 0;
}