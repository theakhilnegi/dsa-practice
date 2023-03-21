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

Node* delete_at_kth(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        if(k==1){
            delete head;
            return NULL;
        }else{
            return head;
        }
    }   
    if(k==1){
        Node *temp = head;
        temp = temp->next;
        swap(temp->data,head->data);
        head->next=temp->next;
        delete temp;
        return head;
    }
    Node *curr = head;
    for (int i = 0; i < k-2; i++)
    {
        curr=curr->next;
    }
    Node *temp = curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

int main(){
    Node *head = new Node (10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head;
    cout<<"Enter k: ";
    int k;
    cin>>k;
    head=delete_at_kth(head,k);
    printLL(head);
    cout<<"-"<<endl;
    return 0;
}