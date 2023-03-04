#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int ele){
        data = ele;
        left = NULL;
        right = NULL;
    }
};

void inorder_traversal(struct node* root){
    if(root==NULL){
        return ;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}


void level_order_traversal(struct node* root){

    if(root==NULL){
        return ;
    }

    queue <struct node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* node = q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
        
    }
}


int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    inorder_traversal(root);
    cout<<endl;
    level_order_traversal(root);

    return 0;
}