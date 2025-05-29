#include <iostream>
using namespace std;
// code to reverse a number
#include <string>

#include <algorithm>

string reverseNum(string num)
{
    reverse(num.begin(), num.end());
    return num;
}

int main()
{
    cout << "Enter the number you want to reverse " << endl;
    string num;
    cin >> num;
    cout << "The reversed number is: " << reverseNum(num) << endl;
}
