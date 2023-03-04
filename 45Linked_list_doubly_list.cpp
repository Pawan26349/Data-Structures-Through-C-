#include<iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

    node(int val){
        prev=NULL;
        data=val;
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
        node* temp2;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
    }
}

void display(node* &head){
    if(head==NULL){
        cout<<"The list is empty .\n";
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void display2(node* &head){
    if(head==NULL){
        cout<<"The list is empty.\n";
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
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
    display2(head);
    return 0;
}