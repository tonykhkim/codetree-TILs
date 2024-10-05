#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, com;

    cin >> str;
    cin >> com;

    int len = com.length();
    int L = str.length();

    for (int i = 0; i < len; i++)
    {
        if (com[i] == 'L')
        {
            str = str.substr(1,L-1) + str.substr(0,1);
        }
        else if (com[i] == 'R')
        {
            str = str.substr(L-1,1) + str.substr(0,L-1);
        }
    }
    cout << str;
    return 0;
}