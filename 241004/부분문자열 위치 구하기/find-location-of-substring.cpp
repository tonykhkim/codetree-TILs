#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    int start_idx = -1;

    if (str1.find(str2) != string::npos)
    {
        start_idx = str1.find(str2);
    }

    cout << start_idx;

    return 0;
}