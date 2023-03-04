#include<iostream>
using namespace std;

// In this problem we detect the cycle if any was there in the linked list.
// In this technique we use the floyd's algo or Hare and Tortoise algorithm .
// In this there was a tortoise which run slower and there was a hare or rabbit which was faster traveller.

// If there was a cycle then rabbit and the tortoise met at a same node at an instance.

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert_ele(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}

void display(node* &head){
    if(head==NULL){
        cout<<"The list is empty.\n";
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

bool detect_cycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

void make_cycle(node* &head){
    int count=0;
    node* temp=head;

    while(temp->next!=NULL && count<2){
        temp=temp->next;
        count++;
    }

    node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    
}

void remove_cycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}


int main()
{
    node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert_ele(head,ele);
    }

    display(head);
    cout<<endl;
    make_cycle(head);
    detect_cycle(head)?cout<<"there was a cycle\n":cout<<"There was no any cycle.\n";

    remove_cycle(head);
    display(head);
    return 0;
}