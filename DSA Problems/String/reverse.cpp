#include<iostream>
using namespace std;
int main(){
    string name="hello";
    int freq[256]={0};
    int left=0,right=name.size()-1;
    for(int i=left;i<right;i++){
        char temp=name[left];
        name[left]=name[right];
        name[right]=temp;
        left++;
        right--;
    }
    cout<<name;
    return 0;
}