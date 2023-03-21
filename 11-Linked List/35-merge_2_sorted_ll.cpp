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

void printLL(Node *head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* insertLL(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while (curr->next!=NULL)    
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

Node* func(Node *h1, Node *h2){
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }
    Node *head=NULL,*tail=NULL,*a=NULL,*b=NULL;
    if(h1->data>h2->data){
        head=h2;
        b=h2->next;
        tail=h2;
        a=h1;
    }else{
        head=h1;
        a=h1->next;
        tail=h1;
        b=h2;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<b->data){
            tail->next=a;
            a=a->next;
            tail=tail->next;
        }else{
            tail->next=b;
            b=b->next;
            tail=tail->next;
        }
    }
    return head;
}

int main(){
    Node *h1 = NULL;
    Node *h2 = NULL;
    int n1,n2,x;
    cout<<"Enter n1: ";
    cin>>n1;
    while(n1--){
        cout<<"Enter x: ";
        cin>>x;
        h1=insertLL(h1,x);
    }
    printLL(h1);
    cout<<endl;
    cout<<"Enter n2: ";
    cin>>n2;
    while(n2--){
        cout<<"Enter x: ";
        cin>>x;
        h2=insertLL(h2,x);
    }
    printLL(h1);
    cout<<endl;
    h1=func(h1,h2);
    printLL(h1);
    return 0;
}