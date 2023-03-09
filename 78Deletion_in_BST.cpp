#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left ;
    struct node* right ;
    node(int ele){
        data = ele;
        left = NULL;
        right = NULL;
    }
};

node* insert_bst(struct node* root,int ele){
    if(root == NULL){
        return new node(ele);
    }

    if(ele < root->data){
        root->left = insert_bst(root->left,ele);
    }
    else{
        root->right = insert_bst(root->right,ele);
    }

    return root;
}



int main(){
    int arr[] = {4,2,5,1,3,6};

    


}