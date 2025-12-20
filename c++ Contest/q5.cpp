#include <iostream>
using namespace std;

int main() {
    int arr[5] = {9, 3, 1, 5, 4};

    for(int i = 0; i < 5; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j > 0 && arr[j] > key) {   
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = key;   
    }

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}