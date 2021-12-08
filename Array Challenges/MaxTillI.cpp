#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void maxTillI(int arr[], int n)
{
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
        cout << mx << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 0, 5, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxTillI(arr, n);
    return 0;
}

// Time Complexity: O(N)