#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int x){
        data = x;
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

Node* insert_at_end(Node *head,int x){
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

int main(){
    int n,x;
    cout<<"Enter n: ";
    cin>>n;
    Node *head=NULL;
    while(n--){
        cout<<"Enter x: ";
        cin>>x;
        head=insert_at_end(head,x);
        printLL(head);
        cout<<endl;
    }
    return 0;
}