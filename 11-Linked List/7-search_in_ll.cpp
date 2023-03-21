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
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

//Iterative method
int searchLLI(Node *head,int x){
    int count=0;
    while(head!=NULL){
        count++;
        if((head->data)==x){
            return count;
        }
        head=head->next;
    }
    return -1;
}

//recursive method
int searchLLR(Node *head,int x){
    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return 1;
    }else{
        int temp = searchLLR(head->next,x);
        if(temp==-1){
            return -1;
        }else{
            return temp+1;
        }
    }
}

int main(){
    Node *head = new Node (10);
    head->next = new Node(275);
    head->next->next = new Node(50);
    head->next->next->next = new Node(44);
    head->next->next->next->next = new Node(40);
    printLL(head);
    int x;
    cout<<"Enter item: ";
    cin>>x;
    cout<<searchLLR(head,x);
    return 0;
}