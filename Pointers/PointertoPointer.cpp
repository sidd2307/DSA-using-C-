#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    int **newptr = &ptr;
    cout << *newptr << endl;
    cout << **newptr << endl;

    return 0;
}