#include<iostream>
using namespace std;
int main(){
    int num,rev=0,final;
    cout<<"Enter the number :";
    cin>>num;
    int org=num;
    while(num!=0){
        rev=(rev*10)+num%10;
        num=num/10;
    }
    for(int i=0;i<=rev;i++){
        final=i*org;
    }
    cout<<final;
    return 0;
}