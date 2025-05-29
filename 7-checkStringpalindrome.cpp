#include <iostream>
using namespace std;
#include <algorithm> // for sort()

bool checkPalindrome(string s1, string s2)
{
    int size1 = s1.size();
    int size2 = s2.size();
    int i = 0, j = size2 - 1;
    while (i <= size1 - 1 && j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "enter the string ";
    string str1, str2;
    cin >> str1 >> str2;
    cout << "the string is checkPalindrome or not :" << checkPalindrome(str1, str2);
}