#include<iostream>
#include<queue>
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
Node* levelOrder(){
    int n;
    cout<<"Ehter the size of tree :";
    cin>>n;
    if(n==0){
        return NULL;
    }
    int val;
    cout<<"enter the "<<n<<"number of nodes :";
    cin>>val;
    Node* root=new Node(val);
    queue<Node*> q;
    q.push(root);
    for(int i=1;i<n;i++){
        cin>>val;
        Node* newnode=new Node(val);
        while(!q.empty()){
            Node* current=q.front();
            if(current->left==NULL){
                current->left=newnode;
                break;
            }
            else if(current->right==NULL){
                current->right=newnode;
                q.pop();
                break;
            }
        }
        q.push(newnode);
    }
    return root;
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=levelOrder();
    cout<<"post order traversal display :";
    postorder(root);
    return 0;
}