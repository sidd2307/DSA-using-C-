#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 1000

int smallestPositiveMissingNumber(int arr[], int n)
{
    bool check[N];

    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }

    int ans = 0;

    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {0, -9, 1, 3, -4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << smallestPositiveMissingNumber(arr, n);
    return 0;
}
