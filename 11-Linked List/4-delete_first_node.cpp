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

Node* delete_at_begin(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp=head->next;
    delete head;
    return temp;
}

int main(){
    int x,n;
    Node *head = new Node (10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printLL(head);
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
    head=delete_at_begin(head);
    printLL(head);
    cout<<endl;
    }
    return 0;
}