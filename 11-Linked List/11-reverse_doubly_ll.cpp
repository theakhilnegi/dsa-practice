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

Node* reverseLL(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *prev = NULL; 
    Node *curr=head; 
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
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
    head=reverseLL(head);
    printLL(head);
    return 0;
}