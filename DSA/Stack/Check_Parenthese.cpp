#include<iostream>
using namespace std;
#define size 5
//We only consider: (), {}, []
class Stack{
    char arr[size];
    int top;

    public:

    Stack(){
        top=-1;
    }
    void push(char c){
        arr[++top]=c;
    }
    char pop(){
        return arr[top--];
    }
    char peek(){
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }

    bool isBalenced(string str){
        Stack s;
        for(char c : str){
            if(c=='(' || c=='{' || c=='['){
                s.push(c);
            }else if(c==')' || c==']' || c=='}'){
                if(s.isEmpty()){
                    return false;
                }
                char obj=s.peek();
                if((obj=='(' && c==')' )||
                   (obj=='{' && c=='}' )||
                   (obj=='[' && c==']' )){
                    s.pop();
                }
                else{
                    return false;
                }
            } 
        }
        return s.isEmpty();
    }
};
int main(){
    Stack s;
    string str="{([))}";
    if(s.isBalenced(str)){
        cout<<"Balenced";
    }else{
        cout<<"Not Balenced";
    }

    return 0;
}