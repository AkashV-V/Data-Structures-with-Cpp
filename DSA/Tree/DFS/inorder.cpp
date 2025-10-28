#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* levelOrder() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    if (n == 0) return NULL;

    int val;
    cout << "Enter " << n << " node values: ";
    cin >> val;
    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    // Start filling remaining nodes
    for (int i = 1; i < n; i++) {
        cin >> val;
        Node* newnode = new Node(val);

        // Keep checking the front node
        while (!q.empty()) {
            Node* temp = q.front();
            if (temp->left == NULL) {
                temp->left = newnode;
                break;
            } else if (temp->right == NULL) {
                temp->right = newnode;
                q.pop(); // Pop once both children are filled
                break;
            } else {
                q.pop();
            }
        }
        q.push(newnode);
    }

    return root;
}

void inorder(Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = levelOrder();

    cout << "In order traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
