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

void printLL(Node *head){
    while(head!=NULL){
        cout<<(head->data)<<" ";
        head=head->next;
    }
}

Node* insertLL(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    temp->prev=curr;
    curr->next=temp;
    return head;
}

Node* delete_head(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr=head;
    delete head;
    curr=curr->next;
    curr->prev=NULL;
    return curr;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Node *head = NULL;
    while(n--){
        int x;
        cout<<"Enter x: ";
        cin>>x;
        head=insertLL(head,x);
    }
    cout<<endl;
    printLL(head);
    cout<<endl;
    head=delete_head(head);
    printLL(head);
    return 0;
}