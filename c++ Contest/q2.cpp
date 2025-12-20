#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node *head = NULL;

    for(int i = 0; i < 3; i++) {
        Node *newnode = new Node;
        cin >> newnode->data;
        newnode->next = head;
        head = newnode;   
    }

    Node *temp = head;
    while(temp!= NULL) {    
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}