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

//naive method
Node* funcN(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *curr=head;
    unordered_set <Node*> u;
    u.insert(curr);
    while(curr->next!=NULL){
        if(u.find(curr->next)==u.end()){
            u.insert(curr->next);
            curr=curr->next;
        }else{
            break;
        }
    }
    curr->next=NULL;
    return head;
}

//Optimised method
//its not working if loop connect to head
Node* funcO(Node* head){
    Node *slow = head, *fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return head;
    }
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    return head;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp2;
    head=funcO(head);
    printLL(head);
    return 0;
}