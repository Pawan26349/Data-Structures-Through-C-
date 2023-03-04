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

void lever_order_traversal(struct node* root){
    if(root == NULL){
        return ;
    }

    queue<struct node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        struct node* node1 = q.front();
        q.pop();
        if(node1!=NULL){
            cout<<node1->data<<" ";
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

void sum_replace_binary_tree(struct node* root){

    if(root==NULL){
        return ;
    }

    sum_replace_binary_tree(root->left);
    sum_replace_binary_tree(root->right);

    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
    // return;
}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    sum_replace_binary_tree(root);

    lever_order_traversal(root);
}