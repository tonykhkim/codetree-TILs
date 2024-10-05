#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len;
    len = str.length();
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
        {
            sum += (int)str[i] - 48;
        }
    }
    cout << sum;
    return 0;
}