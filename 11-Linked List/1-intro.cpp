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

//iterative method
void printLL(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

//recursive method
void printLL2(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    return printLL2(head->next);
}

int main(){
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next=temp1;
    // temp1->next=temp2;
//--------------OR---------------
    Node *head = new Node (10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printLL2(head);
    return 0;
}