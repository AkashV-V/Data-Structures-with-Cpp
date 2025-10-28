#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int n)
    {
        Node *newNode = new Node();
        newNode->data = n;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack empty " << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    void display()
    {
        if (top == NULL)
        {
            cout << "Stach empty !" << endl;
        }
        else{
            Node* temp = top;
            while(temp){
                cout<<temp->data;
                temp=temp->next;
            }
            cout<<"\n";
        }
    }

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.peek();
    cout<<s.peek();

    return 0;
}