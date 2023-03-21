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

//iterative method
Node* funcI(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL||k<2){
        return head;
    }
    Node *curr = head, *prevFirst = NULL;
    bool isFirstPass = true;
    while(curr!=NULL){
        Node *first = curr, * prev = NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirstPass){
            head = prev;
            isFirstPass=false;
        }else{
            prevFirst->next = prev;
        }
        prevFirst = first;
    }
    return head;
}

//recursive method
Node* funcR(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL||k<2){
        return head;
    }
    Node *curr = head, *next=NULL, *prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *rest_head = funcR(next,k);
        head->next=rest_head;
    }
    return prev;
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
    cout<<"Enter k: ";
    cin>>k;
    head=funcI(head,k);
    printLL(head);
    return 0;
}