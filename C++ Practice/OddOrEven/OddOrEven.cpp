#include<iostream>
using namespace std;
int main(){
    int n;
    bool istrue=false;
    cout<<"Enter a number :";
    cin>>n;
    if(n%2==0){
        istrue=true;
    }
    else{
        istrue=false;
    }
    (istrue == true)?cout<<"Even":cout<<"Odd";
    return 0;
}