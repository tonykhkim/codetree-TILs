#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int num1, num2;
    int len1 = str1.length();
    int len2 = str2.length();
    int index1, index2;

    for (int i = 0; i < len1; i++)
    {
        if (isdigit(str1[i]) == 0)
        {
            index1 = i;
            break;
        }
    }

    for (int i = 0; i < len2; i++)
    {
        if (isdigit(str2[i]) == 0)
        {
            index2 = i;
            break;
        }
    }
    //cout << stoi(str1.substr(0,index1+1)) << endl;
    //cout << stoi(str2.substr(0,index2+1)) << endl;
    cout << stoi(str1.substr(0,index1+1)) + stoi(str2.substr(0,index2+1));

    return 0;
}