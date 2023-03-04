#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node * right ;
    node(int ele){
        data = ele;
        left = NULL;
        right = NULL;
    }
};

void left_view(struct node* root){
    if(root == NULL){
        return;
    }

    queue<struct node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        struct node* node1 = q.front();
        q.pop();
        struct node* node2 = q.front();
        if(node1 == NULL){
            cout<<node2->data<<" ";
        }
        if(node1 != NULL){
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


void left_view2(struct node* root){
    if(root == NULL){
        return ;
    }

    queue<struct node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=1;i<=n;i++){
            node* temp = q.front();
            q.pop();

            if(i==1){
                cout<<temp->data<<" ";
            }

            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
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

    root->right->left->right = new node(47);
    
    left_view2(root);
}