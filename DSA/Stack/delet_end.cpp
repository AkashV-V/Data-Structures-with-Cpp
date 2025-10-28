#include<iostream>
using namespace std;

int deleteAtEnd(int arr[],int size){
    if(size==0){
        cout<<"array already empty";
        return size;
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return size;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"array before delete element at end";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after the deletion: ";
    deleteAtEnd(arr,size);
    return 0;
}