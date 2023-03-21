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

// Naive method 1   TC->O(n2)   AS->O(1) 
Node* funcN1(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *fast=head;
    Node *slow=head;
    int count=1;
    while (fast->next!=NULL)
    {
        fast=fast->next;
        count++;
    }
    int temp=count/2;
    while(temp--){
        fast=head;
        for (int i = 0; i < count-1; i++)
        {
            fast=fast->next;
        }
        count--;
        swap(slow->data,fast->data);
        slow=slow->next;
    }
    return head;
}

//Niave method 2    TC->O(n)    AS->O(n)
Node* funcN2(Node *head){
    vector<int> v;
    for (Node *curr = head; curr!=NULL ; curr=curr->next)
    {
        v.push_back(curr->data);
    }    
    for (Node *curr = head; curr!=NULL ; curr=curr->next)
    {
        curr->data=v.back();
        v.pop_back();
    }
    return head;
}

//optimised methos  TC->O(n)    AS->O(1)
Node* funcO(Node *head){
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
    head=funcO(head);
    printLL(head);
    return 0;
}