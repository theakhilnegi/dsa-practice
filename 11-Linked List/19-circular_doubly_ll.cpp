#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

void printLLBackward(Node *head){
    if(head==NULL){
        return;
    }
    Node *curr=head->prev;
    while(curr!=head){
        cout<<(curr->data)<<" ";
        curr=curr->prev;
    }
    cout<<(curr->data)<<" ";
}

void printLLForward(Node *head){
    if(head==NULL){
        return;
    }
    Node *curr=head;
    cout<<(curr->data)<<" ";
    curr=curr->next;
    while(curr!=head){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

Node* insert_at_begin(Node *head, int x){
    if(head==NULL){
        Node *temp = new Node(x);
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    Node *temp = new Node(x);
    temp->next=head;
    Node *temp1= head->prev;
    temp1->next=temp;
    temp->prev=temp1;
    head->prev=temp;
    return temp;
}

Node* insert_at_end(Node *head, int x){
    if(head==NULL){
        Node *temp = new Node(x);
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    Node *temp = new Node(x);
    temp->next=head;
    Node *temp1= head->prev;
    temp1->next=temp;
    temp->prev=temp1;
    head->prev=temp;
    return head;
}

int main(){
    Node *head = NULL;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        int x;
        cout<<"Enter x: ";
        cin>>x;
        head=insert_at_end(head,x);
        printLLForward(head);
        cout<<endl;
        printLLBackward(head);
        cout<<endl;
    }
    return 0;
}