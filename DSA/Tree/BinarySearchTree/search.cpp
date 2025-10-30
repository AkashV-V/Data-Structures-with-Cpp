#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

    Node* insert(Node* root,int val){
        if(root==NULL){
            return new Node(val);
        }
        if(val<root->data){
            root->left=insert(root->left,val);
        }
        else if(val>root->data){
            root->right=insert(root->right,val);
        }
        return root;
    }
    bool search(Node* root,int key){
        if(root==NULL){
            return false;
        }
        if(key==root->data){
            return true;
        }
        if(key<root->data){
            return search(root->left,key);
        }
        else{
            return search(root->right,key);
        }
    } 
    void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }


int main(){
    Node* root=NULL;
    int n;
    cout<<"Enter the number of nodes :";
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        root=insert(root,val);
    }
    int key;
    cout<<"Enter the value to search:";
    cin>>key;
    if(search(root,key)){
        cout<<"found"<<"\n";
    }
    else{
        cout<<"Not Found"<<"\n";
    }
    inorder(root);
    return 0;
}