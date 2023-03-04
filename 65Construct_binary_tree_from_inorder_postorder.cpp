#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int ele){
        data = ele;
        left=NULL;
        right=NULL;
    }
};

void inorder_traversal(struct node* root){
    if(root==NULL){
        return ;
    }
    inorder_traversal(root->left);
    cout<<root->data<<",";
    inorder_traversal(root->right);
}


void postorder_traversal(struct node* root){
    if(root==NULL){
        return ;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<",";
}

void preorder_traversal(struct node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int search(int inorder[],int start, int end,int curr){
    for(int i=start;i<=end;i++){
        if(curr==inorder[i]){
            return i;
        }
    }
    return -1;
}

node* build_tree(int inorder[],int postorder[],int start, int end){
    static int ind = end;

    if(start>end){
        return NULL;
    }

    int curr = postorder[ind];
    ind--;
    struct node * root = new node(curr);
    
    if(start==end){
        return root;
    }
    int pos = search(inorder,start,end,curr);
    root->right = build_tree(inorder,postorder,pos+1,end);
    root->left = build_tree(inorder,postorder,start,pos-1);

    // return root;

}


int main()
{
    // struct node* root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);

    // root->left->left = new node(4);
    // root->left->right = new node(5);

    // root->right->left = new node(6);
    // root->right->right = new node(7);

    // inorder_traversal(root) ;
    // cout<<endl;
    // postorder_traversal(root);
    // cout<<endl;


    // preorder_traversal(root);
    int inorder[] = {4,2,5,1,6,3,7};
    int postorder[] = {4,5,2,6,7,3,1};

    struct node* node1 = build_tree(inorder,postorder,0,6);

    preorder_traversal(node1);


    return 0;
}