#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 3
#define M 3

int spiralOrder(int arr[N][M])
{
    int row_start = 0;
    int row_end = N - 1;
    int col_start = 0;
    int col_end = M - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // left to right-- top
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // top to bottom-- right
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // right to left-- bottom
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // bottom to top-- left
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
    }
    cout << endl;
}

void transpose(int arr[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < M; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main()
{
    int arr[N][M] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    spiralOrder(arr);
    transpose(arr);
    spiralOrder(arr);
    return 0;
}
