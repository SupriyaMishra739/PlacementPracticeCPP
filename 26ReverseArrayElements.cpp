#include <iostream>
using namespace std;
#include <vector>

vector<int> reverseArr(vector<int> &v)
{
    int size = v.size();
    int first = 0;
    int last = size - 1;
    while (first < last)
    {
        // swap
        int temp = v[first];
        v[first] = v[last];
        v[last] = temp;
        first++;
        last--;
    }
    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 56, 7}; // 7,56, 4,       3,2,1
    vector<int> res = reverseArr(v);
    for (int i : res)
    {
        cout << i << " ";
    }
}