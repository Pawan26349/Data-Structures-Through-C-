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

int lever_order_traversal(struct node* root){
    if(root == NULL){
        return -1;
    }

    int count=0;

    queue <struct node*> q;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        struct node* node1 = q.front();
        q.pop();
        if(node1!=NULL){
            count++;
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
    return count;

}


int count_nodes(struct node* root){
    if(root == NULL){
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right) + 1;
}

int main(){
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    // cout<<lever_order_traversal(root)<<endl;

    cout<<count_nodes(root)<<endl;
}