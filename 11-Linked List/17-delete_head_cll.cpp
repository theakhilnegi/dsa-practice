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
    Node *curr=head;
    cout<<(curr->data)<<" ";
    curr=curr->next;
    while(curr!=head){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    } 
}

Node* delete_at_begin(Node *head){
    Node *temp = head;
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    temp=temp->next;
    swap((temp->data),(head->data));
    head->next=temp->next;
    delete temp;
    return head;
}

int main(){
    Node *head = new Node (10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    for (int i = 0; i < 4; i++)
    {
        head=delete_at_begin(head);
        printLL(head);
        cout<<endl;
    }
    
    return 0;
}