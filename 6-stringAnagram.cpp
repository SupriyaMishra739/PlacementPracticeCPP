#include <iostream>
using namespace std;
#include <algorithm> // for sort()

bool checkAnagram(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "enter the string ";
    string str1, str2;
    cin >> str1 >> str2;
    cout << "the string is anagram or not :" << checkAnagram(str1, str2);
}