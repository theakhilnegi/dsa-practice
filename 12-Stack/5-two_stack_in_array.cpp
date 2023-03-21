#include<bits/stdc++.h>
using namespace std;

//with array
struct TwoStack{
    int *arr;
    int cap;
    int top1;
    int top2;
    TwoStack(int n){
        cap=n;
        arr=new int[cap];
        top1=-1;
        top2=cap;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }else{
            exit(1);
        }
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2--;
            return x;
        }else{
            exit(1);
        }
    }
};

int main(){
    TwoStack s(20);
    s.push1(15);
    s.push2(20);
    s.push1(35);
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    s.push2(5);
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    return 0;
}