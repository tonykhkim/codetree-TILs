#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int L = str.length();
    cout << str << endl;

    for (int i = 0; i < L; i++)
    {
        str = str.substr(L-1,1) + str.substr(0,L-1);
        cout << str << endl;
    }

    return 0;
}