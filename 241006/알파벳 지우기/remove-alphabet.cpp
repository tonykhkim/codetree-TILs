#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2,string1,string2;
    cin >> str1;
    cin >> str2;
    string1 = {};
    string2 = {};

    int len1,len2;
    len1 = str1.length();
    len2 = str2.length();

    for (int i = 0; i < len1; i++)
    {
        if (isdigit(str1[i]))
        {
            string1 += str1[i];
        }
    }

    for (int j = 0; j < len2; j++)
    {
        if (isdigit(str2[j]))
        {
            string2 += str2[j];
        }
    }

    cout << stoi(string1) + stoi(string2);
    return 0;
}