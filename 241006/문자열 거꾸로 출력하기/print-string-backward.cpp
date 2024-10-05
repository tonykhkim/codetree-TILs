#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;
    int len;

    while (true)
    {
        cin >> str;
        len = str.length();

        if (str == "END")
        {
            break;
        }

        for (int i = 0; i < (len/2); i++)
        {
            ch = str[i];
            str[i] = str[len-1-i];
            str[len-1-i] = ch;
            
        }
        cout << str << endl;
    }
    return 0;
}