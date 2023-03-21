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

Node* insert_at_index(Node *head, int x, int pos){
    Node * temp = new Node(x);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node * curr = head; 
    for (int i = 1; i <= pos-2&&curr!=NULL; i++)
    {
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
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
    int x,pos;
    cout<<"Enter X and pos: ";
    cin>>x>>pos;
    head=insert_at_index(head,x,pos);
    printLL(head);
    cout<<endl;
    }
    return 0;
}