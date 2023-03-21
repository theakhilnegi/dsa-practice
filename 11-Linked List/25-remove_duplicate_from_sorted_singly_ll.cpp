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

Node* func(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *prev = head;
    Node *frnt = head->next;
    while(frnt!=NULL){
        if(frnt->data==prev->data){
            Node *temp=frnt;
            frnt=frnt->next;
            prev->next=frnt;
            delete temp;
        }else{
            frnt=frnt->next;
            prev=prev->next;
        }
    }
    return head;
}

int main(){
    Node *head = NULL;
    int n,x,k;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter x: ";
        cin>>x;
        head=insertLL(head,x);
    }
    printLL(head);
    cout<<endl;
    head=func(head);
    printLL(head);
    return 0;
}