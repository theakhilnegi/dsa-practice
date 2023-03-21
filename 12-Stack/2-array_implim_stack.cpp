#include<bits/stdc++.h>
using namespace std;

//with array
struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1){
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }
};
// with vector 
struct MyStackV{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
};

int main(){
    MyStack s(5);
    s.push(15);
    s.push(20);
    s.push(35);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    s.push(5);
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}