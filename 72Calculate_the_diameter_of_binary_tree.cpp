#include<iostream>
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

int calculate_height(struct node* root){
    if(root == NULL){
        return 0 ;
    }
    int lheight = calculate_height(root->left);
    int rheight = calculate_height(root->right);

    return max(lheight,rheight) + 1;
}


// the time complexity of this algorithm is O(n^2)
int calculate_diameter(struct node* root){
    if(root==NULL){
        return 0;
    }

    int lheight = calculate_height(root->left);
    int rheight = calculate_height(root->right);

    int ldiameter = calculate_diameter(root->left);
    int rdiameter = calculate_diameter(root->right);

    return max(lheight+rheight+1,max(ldiameter,rdiameter));

}

// There was one more algorithm that having the time complexity O(n)

int find_diameter(struct node* root , int* height){

    if(root==NULL){
        *height = 0;
    }

    int lh = 0 , rh = 0;
    int ldiameter = find_diameter(root->left,&lh);
    int rdiameter = find_diameter(root->right,&rh);

    int curr_diameter = lh + rh + 1;
    *height = max(lh,rh) + 1;

    return max(curr_diameter,max(ldiameter,rdiameter));
}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    // root->left->right->right = new node(9);

    // cout<<calculate_diameter(root)<<endl;
    int height = 0 ;
    cout<<find_diameter(root,0)<<endl;  
    return 0;
}