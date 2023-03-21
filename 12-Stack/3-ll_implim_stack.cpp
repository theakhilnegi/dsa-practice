#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct MyStack{
    Node *head;
    int sz;
    MyStack(){
        head=NULL;
        sz=0;
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop(){
        if(head==NULL){
            return INT16_MAX;
        }
        int res=head->data;
        Node *temp=head;
        head = head->next;
        delete(temp);
        sz--;
        return res;
    }
    int peek(){
        if(head==NULL){
            return INT16_MAX;
        }
        return head->data;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (head==NULL);
    }
};

int main(){
    MyStack s;
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