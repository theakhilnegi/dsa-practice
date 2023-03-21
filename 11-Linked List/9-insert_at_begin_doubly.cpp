#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int x){
        data = x;
        prev=NULL;
        next=NULL;
    }
};

void printLL(Node *head){
    while(head!=NULL){
        cout<<(head->data)<<" ";
        head=head->next;
    }
}

Node* insert_at_begin(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}
int main(){
    int n,x;
    cout<<"Enter n: ";
    cin>>n;
    Node *head=NULL;
    while(n--){
        cout<<"Enter x: ";
        cin>>x;
        head=insert_at_begin(head,x);
        printLL(head);
        cout<<endl;
    }
    return 0;
}