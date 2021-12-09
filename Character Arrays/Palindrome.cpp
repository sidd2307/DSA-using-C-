#include <iostream>
using namespace std;

bool checkPalindrome(char arr[], int n)
{
    bool check = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            check = false;
            break;
        }
    }

    return check;
}

int main()
{
    char arr1[100] = "apple";
    int i = 0;
    checkPalindrome(arr1, 5) ? cout << "Palindrome! " : cout << "Not Palindrome!";
    cout << endl;
    return 0;
}