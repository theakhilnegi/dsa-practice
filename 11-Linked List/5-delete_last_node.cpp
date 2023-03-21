#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

void printLL(Node *head){
    while(head!=NULL){
        cout<<(head->data)<<" ";
        head = head->next;
    }
}

Node* delete_at_end(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node * temp = head; 
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

int main(){
    int x,n;
    Node *head = new Node (10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printLL(head);
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
    head=delete_at_end(head);
    printLL(head);
    cout<<endl;
    }
    return 0;
}