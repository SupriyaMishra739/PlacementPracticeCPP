#include <iostream>
using namespace std;
// find the gcd of 2 numbers
//  The GCD of two numbers is the largest positive integer that divides both numbers without leaving a remainder.

// The Euclidean algorithm is a popular method for efficiently computing the GCD.
// Example: Find GCD of 36 and 60:
// The common divisors of 36 and 60 are 1, 2, 3, 4, 6, 9, 12, 18, 36 and 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.
// The largest common divisor is 12.

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    cout << "Enter the two numbers you want to gcd of " << endl;
    int n, m;
    cin >> n >> m;

    cout << "The gcd of  number is: " << gcd(n, m) << endl;
}