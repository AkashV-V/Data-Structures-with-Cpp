#include<iostream>
using namespace std;
int main(){
    int num,count=0,l;
    cout<<"Enter the number :";
    cin>>num;
    int org=num;
    while(num!=0){
        l=num%10;
        if(l!=0 && org%l==0){
            count++;
        }
        num=num/10;
    }
    cout<<count;
    return 0;
}