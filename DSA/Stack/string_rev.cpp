#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* next;
};
class List{
    Node* top=NULL;
    public:
    void push(char val){
        Node* newnode=new Node();
        newnode->data=val;
        newnode->next=top;
        top=newnode;
    }
    void display(){
        if(top==NULL){
            return;
        }
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List l;
    string name="AKASH";
    for(char val:name){
        l.push(val);
    }
    l.display();
    return 0;
}