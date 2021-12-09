#include <iostream>
using namespace std;

int main()
{
    char arr1[100] = "apple";
    int i = 0;
    while (arr1[i] != '\0')
    {
        cout << arr1[i];
        i++;
    }
    cout << endl;

    char arr2[100];
    cin >> arr2;
    cout << arr2;
    cout << endl;
    return 0;
}