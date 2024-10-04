#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    cin >> str1;
    char first,second;

    first = str1[0];
    second = str1[1];

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == first)
        {
            str1[i] = second;
        }
        else if (str1[i] == second)
        {
            str1[i] = first;
        }
    }
    cout << str1;
    return 0;
}