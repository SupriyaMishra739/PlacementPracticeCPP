#include <iostream>
using namespace std;
#include <map>

// This problem asks to find the characters in a string that appear only once, i.e., the non-repeating characters.

// These characters are unique and do not appear multiple times in the string.
// Example for string “swiss”:
// Non-repeating characters are ‘w’ and ‘i’, since ‘s’ repeats.
void nonrepeatingChars(string s)
{

    map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }
    cout << "the unique characters are:" << endl;

    for (auto pair : freq)
    {
        if (pair.second == 1)
        {
            cout << pair.first << endl;
        }
    }
}

int main()
{

    string str = "swiss";
    nonrepeatingChars(str);
}