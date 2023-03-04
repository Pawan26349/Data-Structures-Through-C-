#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right ;
    node(int ele){
        data = ele;
        left = NULL;
        right = NULL;
    }
};

void right_view(struct node* root){
    if(root==NULL){
        return;
    }
    queue<struct node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        struct node* node1 = q.front();
        q.pop();
        struct node* node2 = q.front();
        if(node1 != NULL){
            if(node2==NULL){
                cout<<node1->data<<" ";
            }
            // cout<<node1->data<<" ";
            if(node1->left){
                q.push(node1->left);
            }
            if(node1->right){
                q.push(node1->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }

}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->right->left->right = new node(8);

    right_view(root);
}