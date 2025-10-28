#include<iostream>
using namespace std;
#define NUM 5

class Stack{
    int arr[NUM];
    int top;

    public:
    
    Stack(){
        top=-1;
    }
    void push(int n){
        if(top==NUM-1){
            cout<<"Stack overflow !\n";
        }
        else{
            arr[++top]=n;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack under flow!\n";
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty !\n";
            return -1;
        }
        cout << "Top element: " << arr[top] << endl;
        return arr[top];
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty\n ";
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
        }
    }
    bool isempty(){
        return (top==-1);
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout<<endl;
    s.pop();
    s.peek();
    s.display();
    return 0;
}