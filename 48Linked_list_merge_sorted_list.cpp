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

class node1{
    public:
    int data;
    node1* next;

    node1(int ele){
        data=ele;
        next=NULL;
    }
};

class node2{
    public:
    int data;
    node2* next;

    node2(int ele){
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

void merge_list(node* &head2,node* &head,node* &head1){
    if(head==NULL && head1==NULL){
        cout<<"The both list are empty.\n";
        return ;
    }
    else{
        node* temp=head;
        node* temp2=head1;
        while((temp!=NULL) && (temp2!=NULL) ){
            if(temp->data < temp2->data){
                insert_ele(head2,temp->data);
                temp=temp->next;
            }
            else{
                insert_ele(head2,temp2->data);
                temp2=temp2->next;
            }
        }
        if(temp==NULL){
            while(temp2!=NULL){
                insert_ele(head2,temp2->data);
                temp2=temp2->next;
            }
        }
        else{
            while(temp!=NULL){
                insert_ele(head2,temp->data);
                temp=temp->next;
            }
        }
        
    }
    
}

int main()
{
    node* head=NULL;
    node* head1=NULL;
    node* head2=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert_ele(head,ele);
    }

    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int ele;
        cin>>ele;
        insert_ele(head1,ele);
    }

    display(head);
    cout<<endl;
    display(head1);
    merge_list(head2,head,head1);
    cout<<endl;
    display(head2);
    
    return 0;
}