#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int recordBreaker(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    int prev = INT_MIN;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > prev) && (arr[i] > arr[i + 1]))
        {
            ans++;
        }
        prev = max(prev, arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << recordBreaker(arr, n);
    return 0;
}

// Time Complexity: O(N)