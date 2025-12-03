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
    int min;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i>j){
                min=j;
            }
            else{
                min=i;
            }
        }
    }
    cout<<"The max number is :"<<min;

    return 0; 
}