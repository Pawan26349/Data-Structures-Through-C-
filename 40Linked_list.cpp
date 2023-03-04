#include<iostream>
using namespace std;


// This is linked list using the structure data structure;
// struct node1 {
//     int data;
//     struct node1 *next;
// }*head1;

// void insert_ele(int val){
//     struct node1 *ptr;
//     ptr=(struct node1*)malloc(sizeof(struct node1));
//     if(ptr==NULL){
//         cout<<"There is overflow.\n";
//     }
//     else{
//         ptr->data=val;
//         if(head1==NULL){
//             head1=ptr;
//             ptr->next=NULL;
//         }
//         else{
//             struct node1 *temp;
//             temp=head1;
//             while(temp->next!=NULL){
//                 temp=temp->next;
//             }
//             temp->next=ptr;
//             ptr->next=NULL;
//         }
//     }
// }

// void display()
// {
//     if(head1==NULL){
//         cout<<"The list is empty.\n";
//     }
//     else{
//         struct node1 *temp;
//         temp=head1;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// }

// This is the linked list using the class .

class node {
    public:
    int data;
    node * next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert_ele(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head==NULL){
        head=n;
    }
    else
    {
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;  
    }
}

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
    return;
}

void display(node* &head){
    if(head==NULL){
        cout<<"The list is empty.\n";
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
}

bool search(node* &head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;

}


int main()
{
    int n;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insert_ele(head,data);
    }

    display(head);

    insertathead(head,6);
    display(head);

    if(search(head,2)){
        cout<<"The element is founded.\n";
    }
    else{
        cout<<"The element is not present.\n";
    }

    return 0;
}