#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void insert(int val)
{
    Node *newnode = new Node();
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}
void deleteAtFirst()
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}
void deleteAtmiddle(int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deleteAtFirst();
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid position";
        return;
    }
    if (temp->next == NULL)
    {
        cout << "Invalid position";
        return;
    }

    Node *del = temp->next;
    temp->next = del->next;
    delete del;
}
void deleteAtEnd()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    deleteAtEnd();
    cout << "delete at end:";
    display();
    deleteAtFirst();
    cout << "delete at first:";
    display();
    deleteAtmiddle(2);
    cout << "delete at position 2:";
    display();

    return 0;
}