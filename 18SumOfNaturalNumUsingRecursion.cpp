#include <iostream>
using namespace std;

int naturalNumSum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num + naturalNumSum(num - 1);
}

int main()
{
    cout << "write the number you want to find the sum till that num: ";
    int num;
    cin >> num;
    cout << "the sum till that num of natural nums is: " << naturalNumSum(num) << endl;
}