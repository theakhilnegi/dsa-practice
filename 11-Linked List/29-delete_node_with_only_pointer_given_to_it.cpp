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

void func(Node *ptr){
    Node *temp= ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
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
    func(head->next->next->next->next);
    printLL(head);
    return 0;
}