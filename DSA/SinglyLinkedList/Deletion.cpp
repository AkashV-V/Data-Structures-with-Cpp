#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class List{
    Node* head =NULL;
    public:
    void insertAtEnd(int val){
        Node* newnode = new Node();
        newnode->data=val;
        newnode->next=NULL;

        Node* temp = head;
        if(head==NULL){
            newnode->next=head;
            head=newnode;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void delAtBeginning(){
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void delAtMiddle(int pos){
        Node* temp=head;
        if(pos==1){
            delAtBeginning();
            return;
        }
        for(int i=1;i<pos-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL){
            cout<<"position out of range!";
            return;
        }
        Node* del=temp->next;
        temp->next=del->next;
        delete del;

    } 
    void delAtEnd(){
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    List l;
    l.insertAtEnd(10);
    l.insertAtEnd(20);
    l.insertAtEnd(30);
    l.insertAtEnd(40);

    cout<<"list before delet end element :";
    l.display();
    cout<<endl;
    cout<<"list after delet the end element :";
    l.delAtEnd();
    l.display();
    l.insertAtEnd(50);
    l.delAtBeginning();
    cout<<endl;
    l.display();
    l.delAtMiddle(2);
    cout<<endl;
    l.display();

    return 0;

}
