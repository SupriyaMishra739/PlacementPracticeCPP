#include <iostream>
using namespace std;

bool checkPalindrome(string s)
{
    int size = s.size();
    int first = 0;
    int last = size - 1;

    while (first <= last)
    {
        if (s[first] == s[last])
        {
            first++;
            last--;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    string s = "peel";

    cout << "the string is palindrome or not :" << checkPalindrome(s) << endl;
}
