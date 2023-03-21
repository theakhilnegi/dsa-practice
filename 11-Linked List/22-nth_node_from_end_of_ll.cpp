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

//Naive method
int funcN(Node *head,int k){
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        return (head->data);
    }
    Node *curr=head;
    int count=0;
    while (curr!=NULL)
    {
        count++;
        curr=curr->next;
    }
    curr=head;
    count=count-k;
    if(count<0){
        return -1;
    }
    while(count--)
    {
        curr=curr->next;
    }
    return (curr->data);
}

//Optimised method
int funcO(Node *head, int k){
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        if(k==1){
            return head->data;
        }else{
            return -1;
        }
    }
    int count=0;
    Node *ahead;
    for (ahead=head; count < k;)
    {
        if(ahead==NULL){
            return -1;
        }
        ahead=ahead->next;
        count++;
    }
    Node *slow=head; 
    while(ahead!=NULL){
        slow=slow->next; 
        ahead=ahead->next;
    }
    return (slow->data);
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
    cout<<endl<<"Enter k: ";
    cin>>k;
    cout<<funcO(head,k);
    return 0;
}