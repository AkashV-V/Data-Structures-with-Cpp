#include<iostream>
using namespace std;

class OddEven{
    public:
    void check(int num){
        if(num/2==0){
            cout<<"even!";
        }
        else{
            cout<<"odd";
        }
    }
};

int main(){
    OddEven n;
    int num;
    cout<<"enter the number:";
    cin>>num;
    n.check(num);
    return 0;
}