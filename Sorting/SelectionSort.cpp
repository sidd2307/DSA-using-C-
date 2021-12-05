#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    print(arr, n);
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}

// Time Complexity: O(log(N^2))
// Picl min element from unsorted array and swap it with element at beginning

// More Info:
// The good thing about selection sort is it never makes more than O(n) swaps 
// and can be useful when memory write is a costly operation. 