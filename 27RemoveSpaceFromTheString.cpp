#include <iostream>
using namespace std;

string removeSpace(string &str)
{
    string res;

    for (char c : str)
    {
        if (c != ' ')
        {
            res = res + c;
        }
    }
    return res;
}

int main()
{
    cout << " Enter a string:" << endl;

    string str;
    getline(cin, str);
    cout << "The final string is:" << removeSpace(str) << endl;
}