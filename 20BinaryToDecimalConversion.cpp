#include <iostream>
using namespace std;
#include <cmath>

int binaryToDecimal(int n)
{
    int power = 0;
    int ans = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans + pow(2, power) * lastDigit;
        power++;

        n = n / 10;
    }
    return ans;
}

int main()
{
    int num = 00000001;

    cout << " the binary to decimal conversion is: " << binaryToDecimal(num) << endl;
}