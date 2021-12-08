#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 1000

int firstRepeatingElement(int arr[], int n)
{
    int idx[N];
    int min_idx = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            min_idx = min(min_idx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (min_idx == INT_MAX)
    {
        return -1;
    }
    else
    {
        return arr[min_idx];
    }
}

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << firstRepeatingElement(arr, n);
    return 0;
}

// Time Complexity: O(N)