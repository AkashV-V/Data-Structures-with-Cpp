#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node();
    Node* one=new Node();
    Node* two=new Node();

    head->data=10;
    one->data=20;
    two->data=30;

    head->next=one;
    one->next=two;
    two->next=NULL;

    Node* temp=head;
    cout<<"the values are :";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}