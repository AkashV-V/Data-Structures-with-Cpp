#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                max=arr[i];
            }
            else{
                max=arr[j];
            }
        }
    }
    cout<<"The max number is :"<<max;
    return 0; 
}