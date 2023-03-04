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

void sum_at_kth_level(struct node* root , int k){
    if(root == NULL ){
        return ;
    }
    
    queue <struct node*> q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    int level = 0 ;

    while(!q.empty()){
        struct node* node1 = q.front();
        q.pop();
        if(node1!=NULL){
            if(level==k){
                sum+=node1->data;
            }
            // cout<<node1->data<<' ';
            if(node1->left){
                q.push(node1->left);
            }
            if(node1->right){
                q.push(node1->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level+=1;
        }
    }
    cout<<sum<<endl;
}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    sum_at_kth_level(root,2);

}