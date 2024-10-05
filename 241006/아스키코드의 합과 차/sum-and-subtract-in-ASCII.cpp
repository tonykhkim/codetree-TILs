#include <iostream>
using namespace std;

int main()
{
    char a,b;

    cin >> a >> b;

    int minus;

    if ((int)a > (int)b)
    {
        minus = (int)a - (int)b;
    }
    else
    {
        minus = (int)b - (int)a;
    }

    cout << (int)a+(int)b << " " << minus;

    return 0;
}