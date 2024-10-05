#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            cout << (char)toupper(str[i]);
        }
    }
    return 0;
}