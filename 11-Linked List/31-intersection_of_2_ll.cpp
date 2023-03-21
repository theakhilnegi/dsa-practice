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

//Naive method      TC->O(m+n)      AS->O(m)
int funcN(Node *h1, Node *h2){
    unordered_set <Node*> s1;
    while(h1!=NULL){
        s1.insert(h1);
        h1=h1->next;
    }
    while(h2!=NULL){
        if(s1.find(h2)!=s1.end()){
            return (h2->data);
        }
        h2=h2->next;
    }
    return -1;
}

//optimised method      TC->O(m+n)      AS->O(1)
//my method but dont know why not working
int funcO1(Node *h1, Node *h2){
    Node *curr = h1;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=h2;
    Node *slow = h1;
    Node *fast = h1;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return -1;
    }
    slow=h1;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    (fast->next)->data;
}

//gfg code working
int funcO2(Node *h1, Node *h2){
    Node *curr1 = h1;
    Node *curr2 = h2;
    int count1=0,count2=0;
    while(curr1!=NULL){
        curr1=curr1->next;
        count1++;
    }
    while(curr2!=NULL){
        curr2=curr2->next;
        count2++;
    }
    int i=0;
    curr1=h1;
    curr2=h2;
    if(count1>count2){
        for (curr1=h1;i<(count1-count2); curr1=curr1->next)
        {
            i++;
        }
        while(curr1!=NULL&&curr2!=NULL){
            if(curr1==curr2){
                return curr1->data;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }
    
}

int main(){
    Node *h1 = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    Node *temp5 = new Node(60);
    h1->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    printLL(h1);
    cout<<endl;
    Node *h2 = new Node(11);
    Node *temp11 = new Node(22);
    Node *temp22 = new Node(33);
    h2->next=temp11;
    temp11->next=temp22;
    temp22->next=temp4;
    printLL(h2);
    cout<<endl;
    cout<<funcO2(h1,h2);
    return 0;
}