#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "nincompoop";
    cout << str1 << endl;
    str1.insert(2, "lol");
    cout << str1 << endl;

    return 0;
}