#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int ele){
        ele = data;
        left = NULL;
        right = NULL;
    }
};

int calculate_height(struct node* root){

    if(root == NULL){
        return 0;
    }

    int lheight = calculate_height(root->left);
    int rheight = calculate_height(root->right);

    return max(lheight,rheight)+1;

}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->left->left = new node(8);

    cout<<calculate_height(root)<<endl;

    return 0;
}