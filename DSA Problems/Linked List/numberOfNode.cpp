#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
void insert(int val){
    Node* newnode= new Node();
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
int count(){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(30);

    cout<<"Total number of Nodes:"<<count();

    return 0;
}