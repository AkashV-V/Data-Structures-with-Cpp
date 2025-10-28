#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class List{
    Node* front;
    Node* rear;
    public:
    List(){
        front=NULL;
        rear=NULL;
    }
    bool isEmpty(){
        return front==NULL;
    }

    void enqueue(int val){
        Node* newnode= new Node();
        newnode->data=val;
        newnode->next=NULL;
        if(front==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=rear->next;
        }
        cout<<val<<"enqueued into stack"<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty !";
            return;
        }
        Node* temp=front;
        cout<<front->data<<"dequeued from the queue "<<endl;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
    }
    int peek(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    List q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.display();

    return 0;
}
