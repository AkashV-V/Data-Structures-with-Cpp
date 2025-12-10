#include<iostream>
using namespace std;

#define MAX 100

class Stack{
    public:
    int arr[MAX];
    int top;

    Stack(){
        top=-1;
    }
    void push(int val){
        if(top==MAX-1){
            cout<<"stack overflow!"<<endl;
            return;
        }
        arr[++top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underslow!"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"stack underflow!"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display(){
        if(top==-1){
            cout<<"stack underflow!"<<endl;
            return;
        }
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top of the stack :"<<s.peek()<<endl;
    s.pop();
    cout<<"top :"<<s.peek()<<endl;
    s.display();

    return 0;
}