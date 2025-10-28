#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int key;
    bool find=false;
    cout<<"enter the key :";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element find at index :"<<i;
            find=true;
        }
    }
    if(find==false){
        cout<<"Element Not found";
    }
    return 0;
}