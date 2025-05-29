#include <iostream>
using namespace std;

int Fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    cout << "Enter the number you want to find the fibonacci " << endl;
    int num;
    cin >> num;
    cout << "The fibonacci number is: " << Fibo(num) << endl;
}