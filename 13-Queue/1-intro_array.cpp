#include<bits/stdc++.h>
using namespace std;

//Naive method as deque take O(n)
struct QueueN{
    int size,cap;
    int *arr;
    QueueN(int c){
        cap=c;
        size=0;
        arr = new int[cap];
    }
    bool isFull(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    void enque(int x){
        if(isFull()){
            return;
        }
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        for (int i = 0; i < size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
};

//Optimised method using circular array
struct QueueO{
    int size,front,cap;
    int *arr;
    QueueO(int c){
        cap=c;
        size=0;
        front=0;
        arr = new int[cap];
    }
    bool isFull(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    void enque(int x){
        if(isFull()){
            return;
        }
        int rear = (front+size-1)%cap;
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        front=(front+1)%cap;
        size--;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int getRear(){
        if(isEmpty()){
        return -1;
        }else{
            return arr[(front+size-1)%cap];
        }
    }
};

int main(){
    QueueO q(10);
    q.enque(10);
    q.enque(20);
    cout<<q.getFront()<<endl;
    q.enque(30);
    q.enque(40); 
    q.deque(); 
    q.deque(); 
    cout<<q.getFront()<<endl;
    q.deque(); 
    cout<<q.getFront()<<endl;
    return 0;
}  