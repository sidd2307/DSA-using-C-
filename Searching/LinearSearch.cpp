#include <iostream>
using namespace std;

int linearSearch(int arr[], int x, int n){
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int x = 110;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << linearSearch(arr, x, n);
    return 0;
}

// Time Complexity: O(N)