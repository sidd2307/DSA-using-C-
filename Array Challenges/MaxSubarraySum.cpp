#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

#define N 1000

// brute force approach --> O(N*N*N)
int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            maxSum = max(sum, maxSum);
        }
    }

    return maxSum;
}

// cumulative sum approach --> O(N*N)
int cumulativeSum(int arr[], int n)
{
    vector<int> curSum(n + 1);
    int maxSum = INT_MIN;

    curSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        curSum[i] = curSum[i - 1] + arr[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = curSum[i] - curSum[j];
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

// kedane's algorithm --> O(N)
int kedanesAlgo(int arr[], int n)
{
    int curSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Brute Force Approach: " << maxSubarraySum(arr, n) << endl;
    cout << "Cumulative Sum: " << cumulativeSum(arr, n) << endl;
    cout << "Kedanes' Algorithm: " << kedanesAlgo(arr, n) << endl;
    return 0;
}

// Time Complexity: O(N)