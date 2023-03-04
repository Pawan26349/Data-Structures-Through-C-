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
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* &head){
    node* temp=head;
    if(temp==NULL){
        cout<<"The list is empty.\n";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

void deletionattale(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=NULL;
    delete todelete;

}

void deletion(node* &head,int key){
    node* temp=head;

    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

void deletion_at_first(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;

}

int main(){
    node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert_ele(head,ele);
    }

    display(head);
    // deletionattale(head);
    // display(head);
    // deletionattale(head);
    // display(head);


    // deletion(head,3);
    // display(head);


    //To delete the first node :
    deletion_at_first(head);
    display(head);
    return 0;

}
