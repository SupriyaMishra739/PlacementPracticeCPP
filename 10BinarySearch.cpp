#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key == arr[mid])
        {
            return mid; // found
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; // not found
}

int main()
{
    int arr[] = {1, 4, 5, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int pos = binarySearch(arr, size, key);
    if (pos != -1)
        cout << "The key " << key << " is at index: " << pos << endl;
    else
        cout << "The key " << key << " is not found." << endl;

    return 0;
}
