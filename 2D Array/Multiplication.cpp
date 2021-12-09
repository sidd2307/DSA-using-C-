#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 3
#define M 3

#define N1 4
#define N2 4
#define N3 4

int spiralOrder(int arr[N1][N3])
{
    int row_start = 0;
    int row_end = N1 - 1;
    int col_start = 0;
    int col_end = N3 - 1;

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

void multiplication(int m1[N1][N2], int m2[N2][N3])
{
    int res[N1][N3];
    for (int i = 0; i < N1; i++)
    {
        for (int j = 0; j < N3; j++)
        {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < N1; i++)
    {
        for (int j = 0; j < N3; j++)
        {
            for (int k = 0; k < N2; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    spiralOrder(res);
}

int main()
{
    int mat1[N1][N2] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
 
    int mat2[N2][N3] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };

    multiplication(mat1, mat2);
    return 0;
}
