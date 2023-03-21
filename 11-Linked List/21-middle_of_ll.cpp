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
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while (curr->next!=NULL)    
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

//Naive method
int funcN(Node *head){
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        return (head->data);
    }
    Node *curr=head;
    int count=0;
    while (curr!=NULL)
    {
        count++;
        curr=curr->next;
    }
    curr=head;
    if(count%2==0){
        count=count/2;
    }else{
        count=count/2;
    }
    while(count--)
    {
        curr=curr->next;
    }
    return (curr->data);
}

//Optimised method
int funcO(Node *head){
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        return head->data;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return (slow->data);
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
    cout<<funcO(head);
    return 0;
}