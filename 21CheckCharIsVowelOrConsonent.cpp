#include <iostream>
using namespace std;

bool checkChar(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}

int main()
{
    char c = 'a';
    cout << "the character is vowel? " << checkChar(c) << endl;
}