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

// Naive method    TC->O(n)   AS->O(n)
bool funcN(Node *head){
    stack<char> st;
    for (Node *curr=head; curr!=NULL; curr=curr->next)
    {
        st.push(curr->data);
    }
    for (Node *curr=head; curr!=NULL; curr=curr->next)
    {
        if(st.top()!=curr->data){
            return false;
        }
        st.pop();
    }
    return true;
}

// optimised method    TC->O(n)    AS->O(1)
Node* reverseLL(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *high = head->next;
    Node *mid = head;
    Node *low = NULL;
    while(high!=NULL){
        mid->next=low;
        low=mid;
        mid=high;
        high=high->next;
    }
    mid->next=low;
    return mid;
}

bool funcO(Node *head){
    if(head==NULL){
        return true;
    }
    Node *slow = head, *fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *rev = reverseLL(slow->next);
    Node *curr = head;
    while(rev!=NULL){
        if(rev->data!=curr->data){
            return false;
        }
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}

int main(){
    Node *head = NULL;
    int n,x;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter x: ";
        cin>>x;
        head=insertLL(head,x);
    }
    printLL(head);
    cout<<endl;
    cout<<funcO(head);
    return 0;
}