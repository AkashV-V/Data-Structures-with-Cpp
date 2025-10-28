#include<iostream>
using namespace std;
#define size 5
class queue{
    int arr[size];
    int front,rear;

    public:
    queue(){
        front=-1;
        rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==size-1;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue is full!";
            return;
        }
        if(isEmpty()){
            front=0;
        }
        arr[++rear]=val;
        cout<<val<<"enqueued into queue"<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"queue is empty!";
            return;
        }
        cout<<arr[front]<<"Dequeue fron the queue!"<<endl;
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
    int peek(){
        if(isEmpty()){
            cout<<"Queue is enpty!";
            return -1;
        }
        return arr[front];
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();
    q.dequeue();
    q.display();
}