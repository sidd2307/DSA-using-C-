#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        counter++;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    print(arr, n);
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}

// Time Complexity: O(log(N^2))
// Repeatedly swap two adjacent elements if they are in wrong order

// More Info:
// In computer graphics it is popular for its capability to detect a very small error
// (like swap of just two elements) in almost-sorted arrays 
// and fix it with just linear complexity (2n).