#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size array :";
    cin>>n;
    int arr[n],sum=0;
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of array is :"<<sum;
    return 0;
    
}