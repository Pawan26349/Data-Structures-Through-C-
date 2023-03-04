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

class Queue{
    node *front;
    node *back;

    public:
    Queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int ele){
        node* n=new node(ele);
        if(front==NULL && back==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void dequeue(){
        if(front==NULL){
            cout<<"There is no element to delete.\n";
            return ;
        }
        node* temp=front;
        front=front->next;
        delete temp;
    }

    int peek(){
        if(front==NULL){
            cout<<"There is no element.\n";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        return front==NULL;
    }
};

// void enqueue(node* &head,int ele){
//     node* n=new node(ele);
//     if(head==n){
//         head=n;
//     }
//     else{
//         node* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=n;
//     }
// }

// void dequeue(node* &head){
//     if(head==NULL){
//         cout<<"The list is empty no element to delete.\n";
//     }
//     else{
//         node* temp=head;
//         if(head->next==NULL){
//             free(temp);
//         }
//         else{
//             head=head->next;
//             free(temp);
//         }
//     }
// }

// int peek(node* &head){
//     if(head==NULL){
//         cout<<"NO element.\n";
//         return -1;
//     }
//     else{
//         return head->data;
//     }
// }

// bool empty(node* &head){
//     return (head==NULL);
// }

// void display(node* &head){
//     if(head==NULL){
//         cout<<"The list is emtpy.\n";
//     }
//     else{
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
// }

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    
    return 0;
}