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

struct Queue{
    Node *front, *rear;
    int sz;
    Queue(){
        front=NULL;
        rear=NULL;
        sz=0;
    }
    void enque(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front=rear=temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        sz++;
    }
    int deque(){
        if(front==NULL){
            return INT16_MAX;
        }
        int res=rear->data;
        Node *temp=front;
        front= front->next;
        delete(temp);
        sz--;
        return res;
    }
    int getFront(){
        if(front==NULL){
            return INT16_MAX;
        }
        return front->data;
    }
    int getRear(){
        if(rear==NULL){
            return INT16_MAX;
        }
        return rear->data;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (front==NULL);
    }
};

int main(){
    Queue q;
    cout<<q.size()<<endl;
    q.enque(15);
    q.enque(20);
    q.enque(35);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.size()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.size()<<endl;
    q.enque(5);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.size()<<endl;
    cout<<q.isEmpty()<<endl;
    q.deque();
    q.deque();
    q.deque();
    cout<<q.isEmpty()<<endl;
    return 0;
}