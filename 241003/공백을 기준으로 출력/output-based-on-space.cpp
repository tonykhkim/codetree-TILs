#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for (int i = 0;i<str1.length();i++)
    { 
        if (str1[i] != ' ')
        {
            cout << str1[i];
        }
        
    }
    for (int j = 0;j<str2.length();j++)
    { 
        if (str2[j] != ' ')
        {
            cout << str2[j];
        }
    }

    return 0;
}