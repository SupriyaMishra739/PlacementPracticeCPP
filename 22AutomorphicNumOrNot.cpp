// 27. Write a code to find an Automorphic number
//         An Automorphic number is a number whose square ends with the same digits as the number itself.

//     For example : 5 is an Automorphic number because 5 ^
//     2 = 25,
//     and the last digit is 5. 6 is an Automorphic number because 6 ^ 2 = 36, and the last digit is 6. 25 is an Automorphic number because 25 ^ 2 = 625, and the last two digits are 25.

#include <iostream>
using namespace std;

bool checkAuto(int n)
{
    int square = n * n;
    int mul = 1;

    // Create a multiplier of 10, 100, 1000... based on number of digits in n
    int temp = n;
    while (temp > 0)
    {
        mul *= 10;
        temp /= 10;
    }

    // Check if square ends with n
    if (square % mul == n)
    {
        return true;
    }

    return false;
}

int main()
{
    int num = 3;

    cout << "The number is automorphic ? " << checkAuto(num) << endl;
}