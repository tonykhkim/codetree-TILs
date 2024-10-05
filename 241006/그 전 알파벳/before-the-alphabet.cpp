#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    int num = (int)a - 1;

    if (num == 96)
    {
        num = 122;
    }

    cout << (char)num;

    return 0;
}