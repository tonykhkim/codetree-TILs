#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, s;
    cin >> str;
    int len = str.length();
    s = str.substr(1,len - 1) + str.substr(0,1);

    cout << s;
    return 0;
}