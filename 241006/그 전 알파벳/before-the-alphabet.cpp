#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    int num = (int)a - 1;

    if (a == 'z')
    {
        a = 'a';
        num = (int)a;
    }

    cout << (char)num;

    return 0;
}