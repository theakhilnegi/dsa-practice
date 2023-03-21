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

Node* func(Node *head){
    Node *eS=NULL, *eE=NULL, *oS=NULL, *oE=NULL;
    for (Node *curr=head; curr!=NULL; curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }
            else{
                eE->next =curr;
                eE=eE->next;
            }
        }else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(oS==NULL||eS==NULL){
        return head;
    }
    eE->next=oS;
    oE->next=NULL;
    return eS;
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
    head=func(head);
    printLL(head);
    return 0;
}