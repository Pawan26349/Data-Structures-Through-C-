#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

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
    node* ptr=head;

    if(head==NULL){
        cout<<"The list is empty.\n";
    }
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

node* reverse_k_node(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

node* reverse_k_nodes_recursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    node* nnode=reverse_k_nodes_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return nnode;
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

    // This is used to reverse all the nodes of the linked list.
    // node* newhead=reverse_k_node(head);
    // display(newhead);

    // This is used to reverse only limited number of nodes in the list.
    node* newnode=reverse_k_nodes_recursive(head);
    display(newnode);
    cout<<endl;

    return 0;
}