#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[n - i-1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}