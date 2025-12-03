#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"Enter the elements :";
    int arr[n];
    bool sort=true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //check sorted or not 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort=false;
            break;
        }
    }
    if(sort){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}