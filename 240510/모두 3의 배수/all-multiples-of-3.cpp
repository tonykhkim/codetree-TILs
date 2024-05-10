#include <iostream>
using namespace std;

int main()
{
    int n;
    bool con = true;

    for (int i=1;i<=5;i++)
    {
        cin >> n;

        if (n%3!=0)
        {
            con = false;
        }
    }

    if (con==true)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}