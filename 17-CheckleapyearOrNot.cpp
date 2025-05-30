#include <iostream>
using namespace std;

// A leap year is a year that is divisible by 4, but not divisible by 100, unless it is also divisible by 400. Example : 2020 is a leap year(divisible by 4).1900 is not a leap year(divisible by 100 but not 400).2000 is a leap year(divisible by 400).

bool checkLeapYearOrNot(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        return true;
    }
    return false;
}

// or you can directly write this
bool checkLeapYearOrNot(int year)
    // {
    //     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    // }

    int main()
{
    bool res = checkLeapYearOrNot(2000);
    (res == true) ? (cout << "leap year , YAYYY!!!") : (cout << "Not leap year , DUHH!!!");
}