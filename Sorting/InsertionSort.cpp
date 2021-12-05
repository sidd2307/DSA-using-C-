#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
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
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    print(arr, n);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}

// Time Complexity: O(log(N^2))
// Insert an element from unsorted array to insert it at its correct position

// More Info:
// Insertion sort is used when number of elements is small. 
// It can also be useful when input array is almost sorted,
// only few elements are misplaced in complete big array.