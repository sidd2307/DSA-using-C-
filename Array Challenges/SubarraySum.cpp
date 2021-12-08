#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

struct answer
{
    int start;
    int end;
};

answer subarraywithgivenSum(int arr[], int n, int s)
{
    answer ans;

    int i = 0;
    int j = 0;
    int sum = 0;

    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        ans.start = i;
        ans.end = j - 1;
        return ans;
    }

    while (j < n)
    {
        sum += arr[j];

        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == s)
        {
            ans.start = i;
            ans.end = j;
            return ans;
        }

        j++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 12;

    answer ans = subarraywithgivenSum(arr, n, s);

    cout << "start: " << ans.start + 1 << " end: " << ans.end + 1 << endl;
    return 0;
}

// Time Complexity: O(N)