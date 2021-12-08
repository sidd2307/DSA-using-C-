#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 1000

void pairSum(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << arr[low] << " " << arr[high] << endl;
            return;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    cout << "Not present!" << endl;
    return;
}

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -2;

    pairSum(arr, n, k);

    return 0;
}
