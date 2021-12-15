#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    cout << &a << endl;
    cout << ptr << endl;

    // Dereferencing
    cout << a << endl;
    cout << *ptr << endl;

    // Value updated
    *ptr = 20;
    cout << a << endl;
    return 0;
}