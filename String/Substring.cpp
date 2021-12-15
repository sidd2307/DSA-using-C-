#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "nincompoop";
    cout << str1 << endl;
    string str2 = str1.substr(3, 3);
    cout << str2 << endl;

    return 0;
}