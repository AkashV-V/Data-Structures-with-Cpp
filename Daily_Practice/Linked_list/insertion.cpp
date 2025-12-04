#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void insertAtFirst(int val){
    Node* newnode = new Node();
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}

void insertAtEnd(int val){
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void insertAtMiddle(int pos,int val){
    if(pos==1){
        insertAtFirst(val);
        return;
    }
    Node* newnode=new Node();
    newnode->data=val;
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"position out of range !";
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    
    display();

    insertAtMiddle(2,90);

    display();

    insertAtFirst(00);

    return 0;
}