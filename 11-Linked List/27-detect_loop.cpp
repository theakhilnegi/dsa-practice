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

string func1(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return "no";
    }
    Node *curr=head;
    unordered_set <Node*> u;
    while(curr->next!=NULL){
        if(u.find(curr)==u.end()){
            u.insert(curr);
            curr=curr->next;
        }else{
            return "yes";
        }
    }
    return "no";
}

string func2(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return "no";
    }
    Node *bcwd=head;
    Node *frwd=head->next;
    Node *temp;
    while(frwd->next!=NULL){
        if(bcwd->next->next==temp){
            return "yes";
        }
        bcwd->next=temp;
        bcwd=frwd;
        frwd=frwd->next;
    }
    return "no";
}

//floyd cycle detection
string func3(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return "no";
    }
    Node *bcwd=head;
    Node *frwd=head;
    while(frwd!=NULL&&frwd->next!=NULL){
        bcwd=bcwd->next;
        frwd=frwd->next->next;
        if(bcwd==frwd){
            return "yes";
        }
    }
    return "no";
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
    cout<<func3(head);
    return 0;
}