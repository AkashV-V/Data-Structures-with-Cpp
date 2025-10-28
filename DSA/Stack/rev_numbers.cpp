#include <iostream>
using namespace std;
#define num 5

class Stack
{
    int arr[num], top;
    public:

    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == num - 1;
    }

    void push(int n)
    {
        if (isFull())
        {
            cout << "Overflow" << endl;
        }
        else
        {
            arr[++top] = n;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Unter slow" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Underflow" << endl;
            return -1;
        }
        return arr[top];
    }

    void display(){
        if(isEmpty()){
            cout<<"Under flow"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<"  ";
            }
        }
    }
};

int main(){
    Stack s,s1;

    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Original stack"<<endl;
    s.display();

    while(!s.isEmpty()){
        int val = s.pop();
        s1.push(val);
    }
    cout << "\nReversed Stack:\n";
    s1.display();

}