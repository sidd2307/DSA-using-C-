#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int x, int n)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearch(arr, x, n);
    return 0;
}

// Time Complexity: O(log(N))
// Elements must be in sorted order