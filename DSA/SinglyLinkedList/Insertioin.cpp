#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class list{
    Node* head;

    public:
    list(){
        head=NULL;
    }
    void AtBeginning(int val){
        Node* newnode=new Node();
        newnode->data=val;
        newnode->next=head;
        head=newnode;
    }
    void AtEnd(int val){
        Node* newnode = new Node();
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
    void Atmiddle(int pos,int val){
        Node* newnode =new Node();
        newnode->data=val;
        if(pos==1){
            AtBeginning(val);
            return;
        }
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
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    list l;
    l.AtEnd(10);
    l.AtEnd(20);
    l.AtEnd(30);

    cout<<"List :";
    l.display();

    l.AtBeginning(5);
    cout<<"list after insert 5 at begnning :";
    l.display();

    l.Atmiddle(3,25);
    cout<<"list after insert 25 at middle :";
    l.display();

    return 0;
}