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
        cout<<"the list is empty.\n";
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void insert_k_nodes(node* &head,int k){
    if(head==NULL){
        cout<<"The list is empty.\n";
    }
    else{
        node* temp=head;
        int count=0;
        while(temp->next!=NULL && count<k-1){
            temp=temp->next;
            count++;
        }
        node* temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=head;
        head=temp->next;
        temp->next=NULL;

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

    insert_k_nodes(head,n-4);

    display(head);
    return 0;

}


