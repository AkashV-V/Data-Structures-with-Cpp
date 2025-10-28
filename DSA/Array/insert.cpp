#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50};
    int pos,val,size=0;
    cout<<"Enter the number to insert :";
    cin>>val;
    cout<<"Enter the position :";
    cin>>pos;

    cout<<"Array before insertion :";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        size++;
    }
    cout<<"\n";
    for(int i=size;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    size++;

    cout<<"Array after insertion:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}