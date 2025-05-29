#include <iostream>
using namespace std;
#include <map> // for sort()

void countFreq(string str)
{
    map<char, int> freq;

    for (char c : str)
    {
        freq[c]++;
    }

    for (auto pair : freq)
    {
        cout << pair.first << "->" << pair.second << endl;
    }
}

int main()
{
    cout << "enter the string ";
    string str;
    cin >> str;
    countFreq(str);
}