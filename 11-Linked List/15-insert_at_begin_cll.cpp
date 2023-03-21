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

Node* insert_at_begin(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    swap((temp->data),(head->data));
    temp->next=head->next;
    head->next=temp;
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
        head=insert_at_begin(head,x);
        printLL(head);
        cout<<endl;
    }

    return 0;
}