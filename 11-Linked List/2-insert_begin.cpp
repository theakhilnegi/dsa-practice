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

Node* insert_at_begin(Node *head, int x){
    Node * curr =new Node(x);
    curr->next = head;
    return curr;
}

int main(){
    int x,n;
    Node * head = NULL;
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