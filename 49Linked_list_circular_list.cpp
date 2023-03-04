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
        n->next=head;
    }
    else{
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
        n->next=head;
    }
}

void display(node* &head){
    if(head==NULL){
        cout<<"the list is empty.\n";
    }
    else{
        node* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);

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

    return 0;
}