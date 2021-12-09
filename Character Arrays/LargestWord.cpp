#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    char arr[] = "be confident and be yourself";

    int i = 0;
    int curr = 0;
    int maxLength = INT_MIN;

    int st;
    int len;
    int maxSt = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (maxLength < curr)
            {
                maxLength = curr;
                maxSt = st;
                st = i+1;
            }
            curr = 0;
        }

        else
        {
            curr++;
        }

        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + maxSt];
    }

    return 0;
}