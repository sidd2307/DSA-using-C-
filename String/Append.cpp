#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "sanjana";
    string str2 = "dash";
    string str3 = str1 + " " + str2;
    string str4 = str1.append(str2);

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;

    return 0;
}