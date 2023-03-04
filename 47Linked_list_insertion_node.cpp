#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int ele){
        data=ele;
        next=NULL;
    }
};

class node2{
    public:
    int data;
    node2 * next;

    node2(int val){
        data=val;
        next=NULL;
    }
};

void insert_ele(node* &head1,int ele){
    node* n=new node(ele);
    if(head1==NULL){
        head1=n;
    }
    else{
        node* temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

}

void display(node* &head1){
    node* temp=head1;
    if(head1==NULL){
        cout<<"The list is empty.\n";
        return ;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int find_length(node* head){
    if(head==NULL){
        return 0;
    }
    else{
        int l=0;
        node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
}

bool intersection_point(node* &head1,node* &head2){
    int l1=find_length(head1);
    int l2=find_length(head2);

    node* ptr1;
    node* ptr2;
    int diff=0;
    if(l1>l2){
        diff=l1-l2;
        ptr1=head1;
        ptr2=head2;

    }
    else{
        diff=l2-l1;
        ptr2=head1;
        ptr1=head2;
    }

    while(diff){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return false;
        }
        diff--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return true;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return false;
}


int main()
{
    node* head1=NULL;
    node* head2=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert_ele(head1,ele);
    }
    display(head1);
    cout<<endl;
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++){
        int ele;
        cin>>ele;
        insert_ele(head2,ele);
    }
    display(head2);
    cout<<endl;
    if(intersection_point(head1,head2)){
        cout<<"There is an intersection point.\n";
    }
    else{
        cout<<"There is no any intersection.\n";
    }

}