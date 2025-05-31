// 20. Write the code to for Armstrong number
// An Armstrong number (or Narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

// For example:
// 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
// 370 is an Armstrong number because 3^3 + 7^3 + 0^3 = 370.

#include <iostream>
using namespace std;
#include <cmath>

int findCount(int num)
{
    int c = 0;

    while (num > 0)
    {
        num = num / 10;
        c++;
    }
    return c;
}

bool checkArmstrong(int num)
{
    // find count of digits in the num
    int count = findCount(num);
    int originalNum = num;
    int arm = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;

        arm = arm + pow(lastDigit, count);
        num = num / 10;
    }
    if (arm == originalNum)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int num = 160;
    if (checkArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}