#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int ele){
        data=ele;
        left=NULL;
        right=NULL;
    }

};

int search(int inorder[],int start, int end,int curr){
    for(int i=start;i<end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* buildtree(int preorder[],int inorder[],int start,int end){
    static int ind=0;

    if(start>end){
        return NULL;
    }

    int curr =  preorder[ind];
    ind++;
    struct node* node1 = new node(curr);
    if(start==end){
        return node1;
    }

    int pos = search(inorder,start,end,curr);
    node1->left = buildtree(preorder,inorder,start,pos-1);
    node1->right = buildtree(preorder,inorder,pos+1,end);
}

void postorder(struct node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    
    int preorder[] = {1,2,4,5,3,6,7};
    int inorder[] =  {4,2,5,1,6,3,7};
    
    struct node* root = buildtree(preorder,inorder,0,6);
    postorder(root);
    return 0;
}