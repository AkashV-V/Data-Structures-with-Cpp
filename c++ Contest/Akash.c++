#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large=0,second=0;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            second=large;
            large=arr[i];
        }
        else{
            if(arr[i]>second && arr[i]==large){
                second=arr[i];
            }
        }
    }
    cout<<second;
    return 0;

}