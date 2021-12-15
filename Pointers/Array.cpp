#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30};

    cout << a << endl;
    cout << *a << endl;

    int *ptr = a;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}