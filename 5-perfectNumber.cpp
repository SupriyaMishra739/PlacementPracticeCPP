#include <iostream>
using namespace std;
// A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself.Example : Is 28 a perfect number ? The divisors of 28 are 1, 2, 4, 7, 14. Sum of divisors : 1 + 2 + 4 + 7 + 14 = 28, so 28 is a perfect number.
bool perfectNumber(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int num;
    cout << " write the number you want to check it is a perfect number of not: ";
    cin >> num;
    cout << perfectNumber(num);
}