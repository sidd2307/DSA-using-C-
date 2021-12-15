#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "sidpanda";
    cout << str1 << endl;
    str1.clear();
    if (str1.empty())
    {
        cout << "Empty!" << endl;
    }

    return 0;
}