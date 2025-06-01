#include <iostream>
using namespace std;
// This problem asks to remove all characters from a string except for the alphabets (both uppercase and lowercase). This can be done by filtering the string and keeping only the alphabetic characters.

bool checkChar(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

string filterAlphabets(string &s)
{
    string res;
    for (char c : s)
    {
        if (checkChar(c))
        {
            res = res + c;
        }
    }
    return res;
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string filtered = filterAlphabets(input);
    cout << "Filtered string: " << filtered << endl;

    return 0;
}