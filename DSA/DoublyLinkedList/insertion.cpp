#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

class List{

    Node* head=NULL;
    public:

    void insertAtBeginning(int val){
        Node* newnode = new Node();
        newnode->data=val;
        newnode->prev=NULL;

        if(head==NULL){
            newnode->next=head;
            head=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    void insertAtEnd(int val){
        Node* newnode = new Node();
        newnode->data=val;
        newnode->next=NULL;

        if(head==NULL){
            insertAtBeginning(val);
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newnode->prev=temp;
        temp->next=newnode;
    }
    void insertAtPosition(int pos,int val){
        if(pos==1){
            insertAtBeginning(val);
            return;
        }

        Node* newnode=new Node();
        Node* temp=head;
        newnode->data=val;
        for(int i=1;i<pos-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Position out of range !";
            delete newnode;
            return;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=newnode;
        }
        temp->next=newnode;
    }
    void fdisplay(){
        if(head==NULL){
            cout<<"List id empty";
            return;
        }
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void bdisplay(){
        if(head==NULL){
            cout<<"List id empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};

int main(){
    List dl;

    dl.insertAtEnd(10);
    dl.insertAtEnd(20);
    dl.insertAtEnd(30);

    cout << "Original list (forward): ";
    dl.fdisplay();

    dl.insertAtBeginning(5);
    cout << "After inserting 5 at beginning: ";
    dl.fdisplay();

    dl.insertAtPosition(3, 15);
    cout << "After inserting 15 at position 3: ";
    dl.fdisplay();

    cout << "Display backward: ";
    dl.bdisplay();

    return 0;
}