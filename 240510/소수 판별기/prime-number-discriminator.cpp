#include <iostream>
using namespace std;

int main()
{
    int n;
    bool con = true;

    cin >> n;

    for (int i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            con = false;
        }
    }

    if (con==true)
    {
        cout << "P";
    }
    else
    {
        cout << "C";
    }
    return 0;
}