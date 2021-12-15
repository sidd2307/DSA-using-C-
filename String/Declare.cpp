#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1(5, 's');
    cout << str1 << endl;

    string str2 = "sidpanda";
    cout << str2 << endl;

    string str3;
    getline(cin, str3);
    cout << str3 << endl;

    return 0;
}