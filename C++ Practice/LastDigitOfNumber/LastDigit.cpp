#include<iostream>
using namespace std;
int main(){
    int d,n,ans=1,last;
    cout<<"Enter the denominator :";
    cin>>d;
    cout<<"Enter the numerator :";
    cin>>n;
    for(int i=0;i<n;i++){
        ans=(ans*d);
    }
    last=ans%10;
    cout<<last;
    return 0;
}