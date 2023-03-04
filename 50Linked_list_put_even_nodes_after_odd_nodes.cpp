#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int ele){
        data=ele;
        next=NULL;
    }
};

void insert_ele(node* &head,int ele){
    node* n=new node(ele);
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

void even_after_odd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* even_node=even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }
    odd->next=even_node;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}

int main(){
    node * head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert_ele(head,ele);
    }

    display(head);
    cout<<endl;
    even_after_odd(head);
    display(head);
    return 0;
}