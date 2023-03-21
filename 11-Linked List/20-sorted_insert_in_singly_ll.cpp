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
    temp->next=head;
    return temp;
}

Node* insertSorted(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    if(x<(head->data)){
        temp->next=head;
        return temp;
    }
    Node *curr = head;
    Node *frwd = head->next;
    while(frwd!=NULL){
        if(x<(frwd->data)){
            temp->next=frwd;
            curr->next=temp;
            return head;
        }else{
            curr=curr->next;
            frwd=frwd->next;
        }
    }
    curr->next=temp;
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
    cout<<"Enter n1: ";
    cin>>n;
    while(n--){
        cout<<"\nEnter y: ";
        cin>>x;
        head=insertSorted(head,x);
        printLL(head);
    }
    return 0;
}