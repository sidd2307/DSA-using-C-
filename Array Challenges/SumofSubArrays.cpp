#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void sumofAllSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sumofAllSubarray(arr, n);
    return 0;
}

// Time Complexity: O(N*N)