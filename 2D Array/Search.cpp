#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

#define N 3
#define M 3

bool search(int arr[N][M], int target)
{
    int row = 0;
    int col = M - 1;

    while (row < N && col >= 0)
    {
        if (arr[row][col] == target)
        {
            return true;
        }
        else if (arr[row][col] > target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    return false;
}

int main()
{
    int mat[N][M] = {{3, 30, 38},
                     {36, 43, 60},
                     {40, 51, 69}};

    int target = 44;

    search(mat, target) ? cout << "Found! " : cout << "Not Found!";
    return 0;
}
