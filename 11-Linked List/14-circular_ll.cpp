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

int main(){
    Node *head = new Node (10);
    head->next=head;
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printLL(head);
    return 0;
}