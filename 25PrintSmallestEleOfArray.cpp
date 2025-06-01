

// This problem asks to find and print the smallest element in an array.You can do this by iterating through the array and comparing each element to find the smallest one.

//     Example : Given an array : [ 5, 3, 8, 1, 9, 4 ] The smallest element in the array is 1 because it is the least value compared to the other elements.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int returnSmallest(const vector<int> &arr)
{
    int small = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}

int main()
{
    vector<int> v = {5, 3, 8, 1, 9, 4}; // ✅ Correct initialization
    int res = returnSmallest(v);
    cout << "The smallest element is: " << res << endl;
    return 0;
}
