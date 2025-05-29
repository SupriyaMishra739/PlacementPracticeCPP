#include <iostream>
#include <map>
using namespace std;

// 17. Write a code to find non-repeating elements in an array.
// This problem asks to find the elements in an array that appear only once, i.e., the non-repeating elements.

// These elements are unique and do not appear multiple times in the array.
// Example for array [4, 5, 4, 3, 6, 3, 7]:
// Non-repeating elements are [5, 6, 7], since ‘4’ and ‘3’ repeat.

void findNonRepeatingEleArray(int arr[], int size)
{
    map<int, int> maps;

    for (int i = 0; i < size; ++i)
    {
        maps[arr[i]]++;
    }

    for (auto &pair : maps)
    {
        if (pair.second == 1)
        {
            cout << pair.first << endl;
        }
    }
}

int main()
{
    int arr[] = {4, 5, 4, 3, 6, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    findNonRepeatingEleArray(arr, size);
}
