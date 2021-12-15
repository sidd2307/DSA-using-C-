#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    cout << &a << endl;
    cout << ptr << endl;

    // gap of 4 since of int type
    // gap of 1 for char
    ptr++;

    cout << ptr << endl;

    ptr--;

    cout << ptr << endl;

    return 0;
}