#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter 2 numbers :";
    cin>>n1>>n2;

    while(n2!=0){
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    cout<<"GCD :"<<n1;

    return 0;
}