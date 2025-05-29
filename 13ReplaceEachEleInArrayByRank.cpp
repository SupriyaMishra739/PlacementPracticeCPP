#include <iostream>
using namespace std;
#include <algorithm>

int findIndexOfEle(int[] arr, int size; int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
}

int[] replaceEleByrank(int[] arr, int size)
{
    int sortedArr[] = sort(arr.begin(), arr.end());
    int res[size];

    {100, 2, 70, 12, 90};
    2, 12, 70, 90, 100

        for (int i = 0; i < size; i++)
    {
        int num = arr[i]; // 100
        int ind = findIndexOfEle(sortedArr, size, num);
        res[i] = ind;
    }
}

int main()
{
    int arr[] = {100, 2, 70, 12, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int[] res = replaceEleByrank(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << res[i];
    }
}
