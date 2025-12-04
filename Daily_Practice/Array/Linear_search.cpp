#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key found at "<<i<<" index";
            break;
        }
        else{
            cout<<"Key not found";
        }
    }
    return 0;
}