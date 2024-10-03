#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2,str3;

    cin >> str1;
    cin >> str2;
    cin >> str3;

    int str1l = str1.length();
    int str2l = str2.length();
    int str3l = str3.length();

    if ((str1l > str2l) && (str2l > str3l))
    {
        cout << str1l - str3l;
    }
    else if ((str1l > str3l) && (str3l > str2l))
    {
        cout << str1l - str2l;
    }
    else if ((str2l > str1l) && (str1l > str3l))
    {
        cout << str2l - str3l;
    }
    else if ((str2l > str3l) && (str3l > str1l))
    {
        cout << str2l - str1l;
    }
    else if ((str3l > str1l) && (str1l > str2l))
    {
        cout << str3l - str2l;
    }
    else if ((str3l > str2l) && (str2l > str1l))
    {
        cout << str3l - str1l;
    }
    return 0;
}