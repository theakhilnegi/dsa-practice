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

Node* func1(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *curr = head;
    while(curr!=NULL&&curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
    return head;
} 

//in this changing the links so that ll of object or anything else can be done easily
Node * func2(Node * head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *curr = head->next->next;
    Node *prev = head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL&&curr->next!=NULL){
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr=next;
    }
    prev->next = curr;
    return head;
}

int main(){
    Node *head = NULL;
    int n,x;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter x: ";
        cin>>x;
        head=insertLL(head,x);
    }
    printLL(head);
    cout<<endl;
    head=func2(head);
    printLL(head);
    return 0;
}