#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "nincompoop";
    cout << str1 << endl;
    str1.erase(3, 3);
    cout << str1 << endl;

    return 0;
}