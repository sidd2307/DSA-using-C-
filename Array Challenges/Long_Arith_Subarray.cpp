#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int longestArithmeticSubarray(int arr[], int n)
{
    int pd = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;

    int j = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    return ans;
}

int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << longestArithmeticSubarray(arr, n);
    return 0;
}

// Time Complexity: O(N)