#include<iostream>
using namespace std;

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
            cout<<temp->data<<' ';
            temp=temp->next;
        }
    }
}

node* reverse_k_nodes(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    node* next;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=reverse_k_nodes(next,k);
    }

    return prev;
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
    node* newnode=reverse_k_nodes(head,2);
    display(newnode);
    cout<<endl;
    return 0;

}