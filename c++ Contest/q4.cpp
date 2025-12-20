#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int low = 0,high = 4;
    int mid;
    bool found = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            found = true;
            break;
        }
        else if (arr[mid] > key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found)
        cout << "Element Found";
    else
        cout << "Element Not Found";
    return 0;
}
